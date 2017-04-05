#include <iostream>
#include <cmath>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

void read(const char filename[], int* n, double numbers[], string items[]);

int main(int argc, char* argv[]){
	// double scale = atof(argv[1]);
	// double numbers[100] = {};
	// string items[100] = {};
	// int item_count = 0;

	// read(argv[2], &item_count, numbers, items);

	// for(int i=0 ; i<item_count ; i++){
	// 	numbers[i] = scale * numbers[i];
	// 	cout << numbers[i] << " " << items[i] << endl;
	// }


	// return 0;

	double numbers[100] = {};
	double prices[100] = {};
	string items[100] = {};
	string items2[100] = {};

	int item_count = 0;
	int cost_count = 0;
	char* recipe = argv[1];
	char* costs = argv[2];

	read(recipe, &item_count, numbers, items);
	read(costs, &cost_count, prices, items2);

	// for(int i= 0 ; i< item_count ; i++){
	// 	cout << numbers[i] << " " << items[i] << endl;
	// }
	// cout << "--------------" << endl;

	// for(int i= 0 ; i< item_count ; i++){
	// 	cout << prices[i] << " " << items2[i] << endl;
	// }

	// cout << "--------------" << endl;

	double sum = 0;
	bool found;
	bool impossible = false;
	for(int i=0 ; i<item_count ; i++){
		found = false;
		for(int j=0 ; j<cost_count ; j++){
			if(items[i].compare(items2[j]) == 0){
				found = true;
				if(prices[j] != 0){
				sum += prices[j]*numbers[i];
				}
			}
		}
		if(!found){
			impossible = true;
			break;
		}
	}

	if(!impossible){
		cout << sum << endl;
	}
	else{
		cout << "impossible" << endl;
	}

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