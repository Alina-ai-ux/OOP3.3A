//Point2.cpp
#include "Point2.h"
#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;
Point2::Point2() {
	x = 0;
	y = 0;
}
Point2::Point2(double m = 0, double n = 0) {
	x = m;
	y = n;
}
Point2::Point2(const Point2& p) {
	x = p.x;
	y = p.y;
}
Point2::operator string () const
{
	stringstream ss;
	ss << "x = " << x << endl;
	ss << "y = " << y << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Point2& p)
{
	cout << "About Point2" << endl;
	return out << (string)p;
}


istream& operator>>(istream& in, Point2& p)
{
	int a, b;
	
	cout << "Input x..." << endl; in >> a;
	cout << "Input y..." << endl; in >> b;
	p.SetX(a); p.SetY(b);

	return in;
}