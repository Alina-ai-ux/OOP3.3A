//Point1.h
#pragma once
#include "Point.h"
#include <iostream>
#include <string>
using namespace std;
class Point1 : public Point{

public:
	double GetX() const { return x; }
	double GetY() const { return y; }
	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }
	Point1();
	Point1(double, double);
	Point1(const Point1&);
	double Distance(Point1 p);
	operator string() const;
	Point1 operator ++();
	Point1 operator --();
	Point1 operator ++(int);
	Point1 operator --(int);
};
