#pragma once

#include <iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

class Point;
double distance(Point A, Point B);


class Point
{
	double x;
	double y;
public:
	double get_x()const;
	double get_y()const;

	void set_x(double x);
	void set_y(double y);

	Point();

	Point(double x);

	Point(double x, double y);
	~Point();
	double distance(Point& dis);

	void print()const;
};
