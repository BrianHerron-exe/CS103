#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

using namespace std;
/*
	My Notes for the Programming Midterm

*/


//dynamically allocate an array of structs.
//animal* zoo = new animal[int length];

struct country{
	string name;
	int avScore;
};

int main(int argc, char* argv[]){

	ifstream infile;
	infile.open(argv[1]);

	int clength;
	int scores;
	

	infile >> clength >> scores;

	country* competition = new country[clength]; 

	int i=0;
	int av;
	string tempName;
	int tempInt;
	while(!infile.fail()){
		infile >> tempName;
		av = 0;
		competition[i].name = tempName;

		for(int i=0 ; i<scores ; i++){
			infile >> tempInt;
			av += tempInt;
		}
		av /= scores;
		competition[i].avScore = av;
		i++;
	}

	for(int j=0 ; j<clength ; j++){
		cout << competition[j].name << " - " << competition[j].avScore << endl;
	}
}

//reset file reader
//infile.clear()
//infile.seekg(std::ios::beg;

