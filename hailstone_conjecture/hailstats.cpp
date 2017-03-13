#include <iostream>
#include <cmath>
#include "limits.h"

using namespace std;

/*
	Name: Adithya Bellathur
	email: bellathu@usc.edu
	Description: This program runs the hailstone algorithm for a range of numbers, then
				 determines which number has the highest and the lowest length hailstone
				 sequence
*/

int main(){

	//initializing variables
	int start;
	int end;
	int length;
	int maxLength = 0;
	int minLength = INT_MAX;
	int maxLengthNum;
	int minLengthNum;
	int num;

	cout << "enter the range you want to search: ";
	cin >> start >> end;
	
	//check if range is ok
	if( start > end){
		cout << "Invalid Range" << endl;
		return 0;
	}
	
	for(int i = start ; i <= end ; i++){
		num = i;
		length = 0;

		//this is the actual hailstone algorithm beign run
		while(num != 1){
			if(num % 2 == 0)
				num /= 2;
			else
				num = num*3 + 1;
			length++;
		}

		//saving min and max lengths
		if(length < minLength){
			minLength = length;
			minLengthNum = i;
		}
		else if(length > maxLength){
			maxLength = length;
			maxLengthNum = i;
		}
	}

	//final ouput
	cout << "Minimum length: " << minLength << endl
		 << "Achieved by: " << minLengthNum << endl
		 << "Maximum Length: " << maxLength << endl
		 << "Achieved by: " << maxLengthNum << endl;

	return 0;

}