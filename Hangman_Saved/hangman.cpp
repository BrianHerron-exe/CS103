// hangman.cpp
// Hangman game illustrates string library functions,
// character arrays, arrays of pointers, etc.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

// Prototype. we'll define this below.
int processGuess(char* word, const char* targetWord, char guess);

// Define an array of strings (since a string is just a char array)
//  and since string are just char *'s, we really want an array of char *'s
const char* wordBank[] = {"computer", "president", "trojan", "program",
                          "coffee", "library", "football", "popcorn",
                          "science", "engineer"};

const int numWords = 10;

int main()
{
  srand(time(0));
  char guess;
  bool wordGuessed = false;
  int numTurns = 10;

  // Pick a random word from the wordBank
  const char* targetWord = wordBank[rand() % numWords];
  cout << targetWord << endl;

  // More initialization code as needed
  char word[80];  // a blank array to use to build up the answer
                  // It should be initialized with *'s and then
                  //  change them to the actual letters when the
                  //  user guesses the letter
  for(int k=0 ; k < strlen(targetWord) ; k++){
    word[k] = '*';
  }

  // An individual game continues until a word
  //  is guessed correctly or 10 turns have elapsed
  while(!wordGuessed && numTurns > 0){
    cout << "Current Word: " << word << endl 
         << numTurns << " turns left. Enter a letter to guess: ";
    cin >> guess;
    cout << endl;

    if(processGuess(word , targetWord , guess) == 0){
      numTurns--;
    }
    //cout << word << endl;

    if(strcasecmp(word, targetWord) == 0){
        wordGuessed = true;
    }
  }


  // Print out end of game status
  if(wordGuessed){
    cout << "Congrats you WIN" << endl;
  }
  else{
    cout << "You lost. the correct word is " << targetWord;
  }

  return 0;
}

// Given the current version of the word, target/selected word, and
// the character that the user just guessed, change the word to
// "turn on" any occurrences the guess character and return a count
// of how many occurrences of 'guess' were found
int processGuess(char* word, const char* targetWord, char guess)
{
    int count=0;
    for(int i=0 ; i< strlen(targetWord) ; i++){
        if(guess == targetWord[i]){
            word[i] = guess;
            count++;
        }
    }
    return count;
}
