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

	cout << "���������� �� ����� '�' �� ����� '�': " << A.distance(B) << endl << endl;
	cout << "���������� �� ����� '�' �� ����� '�': " << B.distance(A) << endl << endl;
	cout << "���������� ����� ������� 'A' � 'B': " << distance(A, B) << endl << endl;
	cout << "���������� ����� ������� 'B' � 'A': " << distance(B, A) << endl << endl;
#endif
}