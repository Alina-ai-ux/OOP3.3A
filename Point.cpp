//Point.cpp
#include "Point.h"
#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;
Point::Point() {
	x = 0;
	y = 0;
}
Point::Point(double m = 0, double n = 0) {
	x = m;
	y = n;
}
Point::Point(const Point& p) {
	x = p.x;
	y = p.y;
}
Point::operator string () const
{
	stringstream ss;
	ss << "x = " << x << endl;
	ss << "y = " << y << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Point& p)
{
	return out << (string)p;
}


istream& operator>>(istream& in, Point& p)
{
	int a, b;
	cout << "Input x..." << endl; in >> a;
	cout << "Input y..." << endl; in >> b;
	p.SetX(a); p.SetY(b);

	return in;
}