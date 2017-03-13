#include <iostream>
#include <cmath>
#include "bmplib.h"

using namespace std;

// global variable. bad style but ok for this lab
unsigned char image[SIZE][SIZE];

// Fill in this function:
void draw_rectangle(int top, int left, int height, int width) {
   for(int i=0 ; i<width ; i++){
      if(top >=0 && top <= 255 && left+i >=0 && left+i <= 255){
         image[top][left+i] = 0;
      }
      if(top+height >=0 && top+height <=255 && left+i >=0 && left+i <=255){
         image[top+height][left+i] = 0;
      }
   }
   for(int j=0 ; j<height ; j++){
      if(top+j >=0 && top+j<=255 && left >=0 && left <= 255){
         image[top+j][left] = 0;
      }
      if(top+j >=0 && top+j<=255 && left+width >=0 && left+width <= 255){
         image[top+j][left+width] = 0;
      }
   }
}

// Fill in this function:
void draw_ellipse(int cy, int cx, int height, int width) {
   for (double theta=0.0; theta < 2*M_PI; theta += .01) {
      double x = (width/2)*cos(theta);
      double y = (height/2)*sin(theta);

      if(cx + x >=0 && cx + x <= 255 && cy + y >= 0 && cy + y <=255){
         image[cy + (int)y][cx + (int)x] = 0;
      }
   }
}


int main() {
   // initialize the image to all white pixels
   for (int i=0; i < SIZE; i++) {
      for (int j=0; j < SIZE; j++) {
         image[i][j] = 255;
      }
   }
   

   // Main program loop here
   int input;
   int param1;
   int param2;
   int param3;
   int param4;

   cout << "To draw a rectangle, enter: 0 top left height width" << endl
        << "To draw an ellipse, enter: 1 cy cx height width" << endl
        << "To save your drawing as 'output.bmp' and quit, enter: 2" << endl;

   do{
      cout << "What is your input? ";
      cin >> input;
      if(input != 2){
         cin >> param1 >> param2 >> param3 >> param4; 
         if(input == 0){
            draw_rectangle(param1 , param2 , param3 , param4);
         }
         else if(input ==1){
            draw_ellipse(param1 , param2 , param3 , param4);
         }
      } 
   }while(input < 2);
   
   // Write the resulting image to the .bmp file
   writeGSBMP("output.bmp", image);
   
   return 0;
}
