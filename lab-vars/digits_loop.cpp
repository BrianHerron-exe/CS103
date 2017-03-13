#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int a = 9;
	int b = 7;

	a = a xor b;
	b = a xor b;
	a = a xor b;
	cout << a << b << endl << endl;


	int num;
	int digit;
	int position = 1;

	cout << "Enter any integer: ";
	cin >> num;

	while(num / position != 0){
		digit = (num % (10 * position))/position;
		//cout << num << "    " << digit << "    " << position << endl; 
		cout << "The " << position << "'s digit is: " << digit << endl;
		position *= 10;
		num = num - digit;
	}

	cout << endl;
	/*
	hundreds = num / 100;
	num = num % 100;
	tens = num / 10;
	num = num % 10;
	ones = num;

	cout << "1's digit is: " << ones << endl;
	cout << "10's digit is: " << tens << endl;
	cout << "100's digit is: " << hundreds << endl << endl;
	*/
}

