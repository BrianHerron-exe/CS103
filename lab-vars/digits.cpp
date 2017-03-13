#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int num;
	int hundreds;
	int tens;
	int ones;

	cout << "Enter an integer between 0 and 999: ";
	cin >> num;

	hundreds = num / 100;
	num = num % 100;
	tens = num / 10;
	num = num % 10;
	ones = num;

	cout << "1's digit is: " << ones << endl;
	cout << "10's digit is: " << tens << endl;
	cout << "100's digit is: " << hundreds << endl << endl;

}