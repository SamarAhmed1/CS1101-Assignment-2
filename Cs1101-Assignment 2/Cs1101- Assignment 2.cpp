//This is the main
#include "point.h"
#include<ctime>
point Center(point C[], int n) { //function to find the center
	double x1 = 0;
	double y1 = 0;
	for (int i = 0; i < n; i++) {
		x1 += C[i].getX(); //for sum of all x points in array
		y1 += C[i].getY(); //for sum of all y points in array
	}
	point r(x1 / n, y1/n); //to get the average
	return r;
}
void closer(point A[], point B[], int n, point p) { //to compare which is closer to p
	point avg1 = Center(A, n); //to get average of first array
	point avg2 = Center(B, n); //to get average of second array
	if (p.distance(avg1) < p.distance(avg2)) //to compare which distance is closer to p
		cout << "Closer to A " << endl; //if the distance of the average of A is closer to p than B
	else
		cout << "Closer to B " << endl;//if B is closer
}
int main() {
	srand(time(0)); //to allow the output to always be random
		point* A = new point[200]; //dynamic array A of size 200
		point* B = new point[200]; //dynamic array B of size 200
		for (int i = 0; i < 200; i++) { //to enter values randomly for all the arrays 
			A[i].setX(rand() % 19 + 71); //between 71 and 89
			A[i].setY(rand() % 19 + 71); //between 71 and 89
			B[i].setX(rand() % 19+ 21); //between 21 and 39
			B[i].setY(rand() % 19 + 21); //between 21 and 39
		}
		for (int i = 0; i < 20; i++) { // to give random 20 points
			point p; //object p
			p.setX(rand() % 94 + 6); //x is always between 6 and 99 
			p.setY(rand() % 94 + 6); //y is always between 6 and 99
			closer(A, B, 200, p); //function calling and allow comparison and to output these comparisons
		}
		return 0;
}