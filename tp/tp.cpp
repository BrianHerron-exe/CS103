/*********************************************************
 * File name : tp.cpp
 * Author    : Adithya Bellathur
 * Date      : 2/12/17
 * Purpose   : Simulates the toilet-paper problem
 * Notes     : None
 *********************************************************/

#include <iostream>   // Basic I/O => cin, cout, etc.
#include <cstdlib>    // Other helpful functions => rand(), RAND_MAX

using namespace std;

// Prototype/declaration of a function that returns a
// uniform random number between [0,1]
double rand_uniform();

// Prototype/declaration of a function that will perform a single
// simulation of two rolls of paper and users
// Returns the number of squares left on the non-empty roll
int single_sim(int N, double p);

int main(int argc, char *argv[])
{
	srand(time(NULL));

  	int N;                // initial number of squares on each roll
  	double p;             // probability of a big-chooser
  	int sims;             // number of trials for our simulation
  	int sum = 0;
  	double avg;

  // Add your code here
  	cout << "Initial # of squares per roll: ";
  	cin >> N;
  	cout << "Probability of big-chooser: ";
  	cin >> p;
  	cout << "Number of trials: ";
  	cin >> sims;

 	for(int i=0 ; i<sims ; i++){
 		sum += single_sim(N,p);
 	}
 	avg = (double) sum/sims;
  // Be sure you produce an output of the form:
  //    Average: 1.2314
  // where the number is the correct average
  	cout << "Average: " << avg << endl;

  	return 0;
}

// return the number of squares on the non-empty roll
//  for this simulation of the problem
int single_sim(int N, double p){
	int roll1 = N; //roll1 is chosen if they are the 2 rolls are the size
	int roll2 = N;
	bool big_chooser;
	while(roll1 > 0 && roll2 > 0){
		/* if statement to determine whether a person is a big or little chooser
		   then assigned to bool big_chooser */
		big_chooser = (rand_uniform() <= p ? true : false);

		//cout << big_chooser << " : ";

		/* logic to decide if the user removes a square from the big 
		   or small roll depending on above bool */
		if(big_chooser){
			if(roll1 >= roll2){
				roll1--;
			}
			else{
				roll2--;
			}
		}
		else{
			if(roll1 <= roll2){
				roll1--;
			}
			else{
				roll2--;
			}
		}
		//cout << roll1 << "   " << roll2 << endl;
	}

	if(roll1 == 0){
		//cout << "roll1 empty. roll2 size is " << roll2 << endl;
		return roll2;
	}
	else{
		//cout << "roll2 empty. roll1 size is " << roll1 << endl;
		return roll1;
	}
}

// returns a uniformly-distributed number in the range [0,1]
//  The caller can use the return result to then determine
//  if it should treat it as a big- or little-chooser by 
//  also using the p parameter.  This code only needs to 
//  produce a random number in the range [0,1]
double rand_uniform(){
	double max = RAND_MAX; 
	return (rand()/max);
}
