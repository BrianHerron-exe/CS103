#include "draw.h"

class Turtle{

public:
	//Part 1
	Turtle(double x0, double y0, double dir0);
	void move(double dist);
	void turn(double deg);

	//Part 2
	void setColor(Color c); // change line color that this Turtle draws from now on
	void off(); // make this Turtle stop drawing lines when it moves
	void on(); // make this Turtle resume drawing lines when it moves

private:
	double x;
	double y;
	double dir;
	bool drawing;
	Color col;
};