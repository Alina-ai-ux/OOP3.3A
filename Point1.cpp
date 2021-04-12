//Point1.cpp
#include "Point1.h"
#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

double Point1::Distance(Point1 B) {
	return sqrt((B.x - this->x) * (B.x - this->x) + (B.y - this->y) * (B.y - this->y));
}
Point1::Point1() {
	x = 0;
	y = 0;
}
Point1::Point1(double m = 0, double n = 0) {
	x = m;
	y = n;
}
Point1::Point1(const Point1& p) {
	x = p.x;
	y = p.y;
}
Point1::operator string () const
{
	stringstream ss;
	ss << "x = " << x << endl;
	ss << "y = " << y << endl;
	return ss.str();
}
Point1 Point1::operator --(int)
{
	Point1 a(*this);
	x--;
	return a;
}
Point1 Point1::operator ++(int)
{
	Point1 a(*this);
	y++;
	return a;
}
Point1 Point1::operator--() {
	--x;
	return *this;
}
Point1 Point1::operator ++() {
	++y;
	return *this;
}
ostream& operator << (ostream& out, const Point1& p)
{
	return out << (string)p;
}


istream& operator>>(istream& in, Point1& p)
{
	int a, b;
	cout << "Input x..." << endl; in >> a;
	cout << "Input y..." << endl; in >> b;
	p.SetX(a); p.SetY(b);

	return in;
}