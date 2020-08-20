// codevita corona virus problem solution
// including cmath

#include <iostream>
#include <cmath>
using namespace std;

double Convert(double degree) 
{ 
    double pi = 3.14159265359; 
    return (degree * (pi / 180)); 
} 

int main()
{
	int x_cord, y_cord, degree;
	double x_next, y_next;
	cout << "Enter (x,y) and degree : ";
	cin >> x_cord >> y_cord >> degree;
	x_next = x_cord + sin(Convert((degree + 90))) + cos(Convert((degree + 90)));
	y_next = y_cord + sin(Convert(degree)) + cos(Convert(degree));
	cout << "Next coordiantes is : ("<< x_next <<","<<y_next <<")"<< endl;
	return 0;
}

