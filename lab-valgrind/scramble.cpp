// wscramble.cpp
// Word Scramble guessing game
// Illustrates string library functions, character arrays,
//  arrays of pointers, etc.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <fstream>

using namespace std;

// Scramble the letters of this string randomly
void permute(char items[], int len);

// Define an array of strings (an array of char pointers, like argv)
// const char* wordBank[] = {
//    "computer", "president", "trojan", "program", "coffee",
//    "library", "football", "popcorn", "science", "engineer"};

//const int numWords = 10;

int main(int argc, char* argv[]) {
	
	srand(time(0));
	int fileLength;

	if(argc < 2){
  		//we need at least ./filter <input file> <filter name> to continue
		cout << "usage: ./scramble <input file>" << endl;
		cout << "You do not have the right inputs" << endl;
		return -1;
  	}

  	// cout << argv[0] << "  " << argv[1] << endl;
  	// cout << *argv[0] << "  " << *argv[1] << endl;

  	ifstream infile;
  	infile.open(argv[1]);

  	if(infile.fail()){
  		cout << "failed to open file. Exiting program" << endl;
  		return -1;
  	}

  	infile >> fileLength;

  	if(!fileLength){
  		cout << "could not read number of words in file. Exiting program" << endl;
  		return -1;
  	}


  	char** fileWords = new char*[fileLength];
  	char temp[41];

  	for(int i=0 ; i<fileLength ; i++){
  		infile >> temp;
  		char* new_word = new char[strlen(temp)+1];
  		fileWords[i] = new_word;
  		strcpy(fileWords[i] , temp);
  	}

  	for(int i=0 ; i<fileLength ; i++){
  		cout << fileWords[i] << " ";
  	}
  	cout << endl << endl;
	
	char guess[80];
	bool wordGuessed = false;
	int numTurns = 10;

	// Pick a random word from the wordBank
	int target = rand() % fileLength;
	int targetLen = strlen(fileWords[target]);

	// Make a dynamically-allocated copy of the word and scramble it
	char* word = new char[targetLen+1];
	strcpy(word, fileWords[target]);
	permute(word, targetLen);

	// An individual game continues until a word
	//  is guessed correctly or 10 turns have elapsed
	while (!wordGuessed && numTurns > 0) {
		cout << "Scrambled word: " << word << endl;
		cout << "What do you guess the original word is? ";
		cin >> guess;
		wordGuessed = (strcmp(guess, fileWords[target]) == 0);
		numTurns--;
	}
	
	if (wordGuessed) {
		cout << "You win!" << endl;
	}
	else {
		cout << "Too many turns...You lose!" << endl;
	}

	infile.close();
	delete [] word;
	
	for(int i=0 ; i<fileLength ; i++){
		delete [] fileWords[i];
	}

	delete [] fileWords;

	return 0;
}

// Scramble the letters. See "Knuth shuffle" on Wikipedia.
void permute(char items[], int len) {
  for (int i = len-1; i > 0; --i) {
	int r = rand() % i;
	char temp = items[i];
	items[i] = items[r];
	items[r] = temp;
  }
}

