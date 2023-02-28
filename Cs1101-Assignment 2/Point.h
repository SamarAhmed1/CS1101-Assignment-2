#include <iostream>
#include <cmath>
using namespace std;
class point
{
private:
	float x;
	float y;
public:
	point(); //default constructor
	point(int a, int b); //constructor
	int getX(); //getter for x
	int getY(); //getter for y
	void setX(int a); //setter for x
	void setY(int b); //setter for y
	void Display(); //Display
	double distance(point& p); //calculate distance
};
