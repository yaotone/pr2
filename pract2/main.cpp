#include <iostream>
#include "circle.h"
#include <math.h>
//by gulyaev and Grishin :)
using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	float a, b, c;
	Circle mas[3] = { Circle(0, 0, 0), Circle(0, 0, 0), Circle(0, 0, 0) };
	for (int i = 0; i < 3; i++) {
		cout << "введите координаты и радиус круга №" << i + 1<<':' << endl;
		cin >> a >> b >> c;
		mas[i].set_circle(a, b, c);
		cout << "Площадь круга №" << i + 1 << ' ' << mas[i].square()<<endl;
		cout << "стороны треугольника для круга №" << i + 1 <<':'<< endl;
		cin >> a >> b >> c;
		if (mas[i].triangle_around(a, b, c)) {
			cout << "В круг можно вписать этот треугольник"<<endl;
		}
		else {
			cout << "В круг нельзя вписать этот треугольник"<<endl;
		}
		if (mas[i].triangle_in(a, b, c)) {
			cout << "В треугольник можно вписать этот круг"<<endl;
		}
		else {
			cout << "В треугольник нельзя вписать этот круг"<<endl;
		}
		cout <<"Ввод данных второго круга для сравнения:" << ' ';
		cin >> a >> b >> c;
		if (mas[i].check_circle(a, b, c)) {
			cout << "Окружности пересекаются"<<endl;
		}
		else {
			cout << "Окружности не пересекаются"<<endl;
		}
	}

	return 0;
}

