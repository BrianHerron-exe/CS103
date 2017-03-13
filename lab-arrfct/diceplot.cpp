#include <iostream>
#include <cmath>
#include <iomanip>
#include <cstdlib>

using namespace std;

void printHistogram(int c[]);
int roll();

int main(){

	srand(time(NULL));

	int diceSum;
	int count[21] = {};
	int n;

	cout << "How many experiments would you like to run? ";
	cin >> n;

	for (int i = 0; i < n; i++){
		diceSum = 0;
		for(int j=0 ; j<4 ; j++){
			diceSum += roll();
		}
		count[diceSum-4]++;
		//cout << diceSum << " ";
	}

	printHistogram(count);

}

int roll(){
	return (rand() % 6 + 1);
}

void printHistogram(int c[]){
	//cout << endl;
	for (int i = 0; i < 21; i++){
		cout << setw(2) << i+4 << ": ";
		for(int j = 0 ; j < c[i] ; j++){
			cout << "X";
		}
		cout << endl;
	}
	cout << endl;
}