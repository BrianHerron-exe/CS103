#include <iostream>

using namespace std;

/*
	Name: Adithya Bellathur
	email: bellathu@usc.edu
	Description: This program takes an integer from the user 
				 and finds the hailstone sequence for that number,
				 along with the length of the sequence.
*/

int main(){

	int num;
	int length = 0;

	cout << "enter a number: ";
	cin >> num;

	while(num != 1){
		if(num % 2 == 0)
			num /= 2;
		else
			num = num*3 + 1;

		cout << num << " ";
		length++;
	}
	cout << endl << "Length: " << length << endl;
}