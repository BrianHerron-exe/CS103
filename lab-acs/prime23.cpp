#include <iostream>

using namespace std;

int main(){
	
	int num;
	int twos = 0;
	int threes = 0;

	cout << "Enter a positive integer: ";
	cin >> num;

	while(num % 2 == 0){
		num /= 2;
		twos++;
	}
	while(num % 3 == 0){
		num /= 3;
		threes++;
	}

	if(num == 1){
		cout << "Yes" << endl 
			 << "Twos=" << twos << " "
			 << "Threes=" << threes << endl;
	}
	else{
		cout << "No" << endl;
	}
}