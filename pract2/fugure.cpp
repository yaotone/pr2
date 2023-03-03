#include "figure.h"
#include <math.h>
#include <iostream>
using namespace std;
float Figure::lenght(float xx1, float xx2, float yy1, float yy2) {
	return sqrt(pow((xx2 - xx1), 2) + pow((yy2 - yy1), 2));
}
bool Figure::is_square() {
	if ((y1 == y2 and y4 == y3) or (y4 == y1 and y2 == y3)) {
		if ((x1 == x4 and x2 == x3) or (x4 == x3 and x1 == x2)) {
			if (st1 == st2 and st1 == st3 and st1 == st4)
			{
				return true;
			}
		}
	}
	return false;
}
bool Figure::is_prug() {
	if ((y1 == y2 and y4 == y3) or (y4 == y1 and y2 == y3)) {
		if ((x1 == x4 and x2 == x3) or (x4 == x3 and x1 == x2)) {
			if (st1 == st3 and st4 == st2)
			{
				return true;
			}
		}
	}
	return false;
}
bool Figure::is_romb() {
	if ((x2 == x4 and y1 == y3) or (x1 == x3 and y4 == y2)) {
		if (st1 == st2 and st1 == st3 and st1 == st4) {
			return true;
		}
	}
	return false;
}
Figure::Figure(float xx1, float xx2, float xx3, float xx4, float yy1, float yy2, float yy3, float yy4)
{

	x1 = xx1;
	x2 = xx2;
	x3 = xx3;
	x4 = xx4;
	y1 = yy1;
	y2 = yy2;
	y3 = yy3;
	y4 = yy4;
	st1 = lenght(x1, x2, y1, y2);
	st2 = lenght(x2, x3, y2, y3);
	st3 = lenght(x3, x4, y3, y4);
	st4 = lenght(x4, x1, y4, y1);
	p = st1 + st2 + st3 + st4;
	if (is_square())
	{
		s = pow(st1, 2);
	}
	else if (is_prug())
	{
		s = st1 * st2;
	}
	else if (is_romb()) {
		s = 0.5 * lenght(x1, x3, y1, y3) * lenght(x2, x4, y2, y4);
	}
}

void Figure::show() {
	cout << "координаты углов фигуры:" << endl;
	cout << "X1:" << x1 << endl;
	cout << "Y1:" << y1 << endl;
	cout << "X2:" << x2 << endl;
	cout << "Y2:" << y2 << endl;
	cout << "X3:" << x3 << endl;
	cout << "Y3:" << y3 << endl;
	cout << "X4:" << x4 << endl;
	cout << "Y4:" << y4 << endl;
	cout << "длинны сторон: " << st1 << ' ' << st2 << ' ' << st3 << ' ' << st4 << endl;
	cout << "площадь:" << s << endl;
	cout << "периметр:" << p << endl;
	cout << "фигура: ";
	if (is_square()) {
		cout << "квадрат" << endl;
	}
	else if (is_prug()) {
		cout << "прямоугольник" << endl;
	}
	else if (is_romb()) {
		cout << "ромб" << endl;

	}
	if (is_in_circle()) {
		cout << "можно вписать в окружность" <<endl;
	}
	else {
		cout << "нельзя вписать в окружность" << endl;
	}
	if (is_out_circle()) {
		cout << "круг может быть вписан в четырехугольник" << endl;
	}
	else {
		cout << "круг неможет быть вписан в четырехугольник" << endl;
	}
}

bool Figure::is_in_circle() {
	if (is_romb()) {
		return false;
	}
	if (is_square()) {
		return true;
	}
	if (is_prug()) {
		return true;
	}
	return false;

}
bool Figure::is_out_circle() {
	if (is_romb()) {
		return true;
	}
	if (is_square()) {
		return true;
	}
	return false;
}
