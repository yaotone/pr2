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
		cout << "������� ���������� � ������ ����� �" << i + 1<<':' << endl;
		cin >> a >> b >> c;
		mas[i].set_circle(a, b, c);
		cout << "������� ����� �" << i + 1 << ' ' << mas[i].square()<<endl;
		cout << "������� ������������ ��� ����� �" << i + 1 <<':'<< endl;
		cin >> a >> b >> c;
		if (mas[i].triangle_around(a, b, c)) {
			cout << "� ���� ����� ������� ���� �����������"<<endl;
		}
		else {
			cout << "� ���� ������ ������� ���� �����������"<<endl;
		}
		if (mas[i].triangle_in(a, b, c)) {
			cout << "� ����������� ����� ������� ���� ����"<<endl;
		}
		else {
			cout << "� ����������� ������ ������� ���� ����"<<endl;
		}
		cout <<"���� ������ ������� ����� ��� ���������:" << ' ';
		cin >> a >> b >> c;
		if (mas[i].check_circle(a, b, c)) {
			cout << "���������� ������������"<<endl;
		}
		else {
			cout << "���������� �� ������������"<<endl;
		}
	}

	return 0;
}

