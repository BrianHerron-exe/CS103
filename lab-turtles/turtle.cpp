#include "turtle.h"
#include <cmath>


//constructor
Turtle::Turtle(double x0, double y0, double dir0){
	x = x0;
	y = y0;
	dir = dir0;
	drawing = true;
	col = draw::BLACK; 
	draw::setcolor(col);
}

//methods
void Turtle::move(double dist){
	if(drawing){
		draw::setcolor(col);
		draw::line(x,y, 
				  (x+(dist*cos((M_PI/180)*dir))),
				  (y+(dist*sin((M_PI/180)*dir))));
	}

	x = (x+(dist*cos((M_PI/180)*dir)));
	y = (y+(dist*sin((M_PI/180)*dir)));
}
	
void Turtle::turn(double deg){
	dir = dir + deg;
}

void Turtle::setColor(Color c){
	col = c;
}

void Turtle::off(){
	drawing = false;
}

void Turtle::on(){
	drawing = true;
}
