//Point2.h
#pragma once
#include "Point.h"
#include <iostream>
#include <string>
using namespace std;
class Point2 : private Point {

public:
	double GetX() const { return x; }
	double GetY() const { return y; }
	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }
	Point2();
	Point2(double, double);
	Point2(const Point2&);
	double Distance(Point2 p);
	operator string() const;
	Point2 operator ++();
	Point2 operator --();
	Point2 operator ++(int);
	Point2 operator --(int);
	friend ostream& operator <<(ostream&, const Point2&);
	friend istream& operator >>(istream&, Point2&);
};

