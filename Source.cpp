//Source.cpp
#include "Point.h"
#include "Point1.h"
#include "Point2.h"
using namespace std;
int main() {
	Point A;
	A.SetX(10);
	A.SetY(-5);
	Point B;
	cin >> B;
	cout << B;
	Point1 C;
	C.SetX(10);
	C.SetY(10);
	cout << C;
	Point2 D;
	cin >> D;
	cout << D;
	return 0;
};