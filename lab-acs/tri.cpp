#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int theta;
	double width;

	cout << "Enter the angle theta in degrees: " << endl;
	cin >> theta; 
	
	for(int i=0 ; i < 31 ; i++){
		width = i * tan((theta * M_PI)/180.0);
		
		if(width >= 20 && width <= 30){
			for(int j=0 ; j < 20 ; j++){
				cout << "*";
			}
		}
		else{
			for(int j=0 ; j < width ; j++){
				cout << "*";
			}
		}
		cout << endl;
	}

}