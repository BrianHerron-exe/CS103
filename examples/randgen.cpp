#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc, char* argv[])
{
  srand(time(0));
  if(argc < 3){
    cout << "Not enough arguments" << endl;
    return 1;
  }
  int n = atoi(argv[1]);
  int k = atoi(argv[2]);
  for(int i=0; i < n; i++){
    cout << 1 + rand()%k << " ";
  }
  cout << endl;
  return 0;
}
