#include <iostream>
using namespace std;

class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}

	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}

	Point()
	{
		x = y = 0;
		cout << "DefaultConstructor:\t" << this << endl;
	}

	Point(double x)
	{
		this->x = x;
		this->y = 0;
		cout << "1ArgConstructor:\t" << this << endl;
	}

	Point(double x = 0, double y = 0)
	{
		this->x = x;
		this->y = y;
		cout << "Constructor:\t\t" << this << endl;
	}
	~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}
	double distance(Point& dis)
	{
		double x_distance = this->x - dis.x;
		double y_distance = this->y - dis.y;
		double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
		return distance;
	}

	void print()const
	{
		cout << "X = " << x << "\tY = " << y << endl;
	}
};

double distance(Point A, Point B)
{
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
	return distance;
}

#define DISTANCE_CHECK

void main()
{
	setlocale(LC_ALL, "");

#ifdef DISTANCE_CHECK
	Point A(5, 9);
	Point B(6, 10);

	A.print();
	B.print();

	cout << "Расстояние от точки 'А' до точки 'В': " << A.distance(B) << endl << endl;
	cout << "Расстояние от точки 'В' до точки 'А': " << B.distance(A) << endl << endl;
	cout << "Расстояние между точками 'A' и 'B': " << distance(A, B) << endl << endl;
	cout << "Расстояние между точками 'B' и 'A': " << distance(B, A) << endl << endl;
#endif
}