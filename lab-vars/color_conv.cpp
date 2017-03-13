#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   // Enter your code here
   double red;
   double green;
   double blue;

   cout << "red: ";
   cin >> red;
   cout << "green: ";
   cin >> green;
   cout << "blue: ";
   cin >> blue;
   cout << endl;

   double white = max(red/255.0 , max(green/255.0 , blue/255.0));

   double cyan = (white - red/255.0)/white;
   double magenta = (white - green/255.0)/white;
   double yellow = (white - blue/255.0)/white;
   double black = 1 - white;

   cout << "cyan: " << cyan << endl;
   cout << "magenta: " << magenta << endl;
   cout << "yellow: " << yellow << endl;
   cout << "black: " << black << endl;

   
   
   
   return 0;
}
