#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

void read(const char filename[], int* n, double numbers[], string items[]);

int main(int argc, char* argv[]){
	double scale = atof(argv[1]);
	double numbers[100] = {};
	string items[100] = {};
	int item_count = 0;

	read(argv[2], &item_count, numbers, items);

	for(int i=0 ; i<item_count ; i++){
		numbers[i] = scale * numbers[i];
		cout << numbers[i] << " " << items[i] << endl;
	}


	return 0;
}

void read(const char filename[], int* n, double numbers[], string items[]){
	fstream infile;
	infile.open(filename);
	while(!infile.fail()){
		infile >> numbers[*n] >> items[*n];

		if(!infile.fail()){
			(*n)++;
		}
	}

	infile.close();
}