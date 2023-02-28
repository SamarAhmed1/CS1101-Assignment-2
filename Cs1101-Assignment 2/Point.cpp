#include "Point.h"
point::point() //default constructor
{
	x = 0;
	y = 0;
}
point::point(int a, int b) { //default constructor
	x = a;
	x = b;
}
int point::getX() { //getter
	return x;
}
int point::getY() { //getter
	return y;
}
void point::setX(int a) { //setter
	x = a;
}
void point::setY(int b) { //setter
	y = b;
}
void point::Display() { //display
	cout << "The x coordinate is: " << x << "The y coordinate is: " << y << endl;
}
double point::distance(point& p){
	double d = sqrt(pow(x - p.x,2) + pow(y - p.y,2)); //calculation for distance
return d;
	}