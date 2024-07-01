#include "Point.h"

double Point::get_x()const
{
	return x;
}
double Point::get_y()const
{
	return y;
}

void Point::set_x(double x)
{
	this->x = x;
}
void Point::set_y(double y)
{
	this->y = y;
}

Point::Point()
{
	x = y = 0;
	cout << "DefaultConstructor:\t" << this << endl;
}

Point::Point(double x)
{
	this->x = x;
	this->y = 0;
	cout << "1ArgConstructor:\t" << this << endl;
}

Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
	cout << "Constructor:\t\t" << this << endl;
}
Point::~Point()
{
	cout << "Destructor:\t\t" << this << endl;
}
double Point::distance(Point& dis)
{
	double x_distance = this->x - dis.x;
	double y_distance = this->y - dis.y;
	double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
	return distance;
}

void Point::print()const
{
	cout << "X = " << x << "\tY = " << y << endl;
}


double distance(Point A, Point B)
{
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
	return distance;
}