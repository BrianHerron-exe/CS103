#include <iostream>
#include <cmath>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include "bmplib.h"

using namespace std;

void gaussian(double k[][11], int N, double sigma);

int main(){
	double k[11][11];

	gaussian(k, 3, 1.5);
}


void gaussian(double k[][11], int N, double sigma){
	cout << "gaussian: " << endl;
	//calculate gaussian kernel
	for(int y=0 ; y<N; y++){
		for(int x=0 ; x<N ; x++){
			k[y][x] = pow(exp(1.0) , -(pow(x-(N/2),2)/(2*pow(sigma,2)) + pow(y-(N/2),2)/(2*pow(sigma,2))) );
			cout << k[y][x] << "  |  ";
		}
		cout << endl;
	}
	cout << endl;

	//find sum
	double sum = 0.0;
	for(int y=0 ; y<N; y++){
		for(int x=0 ; x<N ; x++){
			sum += k[y][x];
		}
	}

	//normalize
	for(int y=0 ; y<N; y++){
		for(int x=0 ; x<N ; x++){
			k[y][x] = k[y][x]/sum;
		}
	}

	//re-write kernel
	cout << "normalized: " << endl;
	for(int y=0 ; y<N; y++){
		for(int x=0 ; x<N ; x++){
			cout << k[y][x] << "  |  ";
		}
		cout << endl;
	}

	cout << endl;
}