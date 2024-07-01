#include "Point.h"

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