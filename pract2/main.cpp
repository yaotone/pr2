#include <iostream>
#include "triangle.h"
#include <math.h>
// created by grishin i gulyaev together; 

using namespace std;
int main() {
	setlocale(LC_ALL, "Rus");
	triangle mas[3];
	double a, b, c;
	for (int i = 0; i < 3; i++) {
		cout << "¬ведите стороны треугольника под номером " << i + 1 << " cherez probel" << endl;
		cin >> a >> b >> c;
		mas[i].set(a, b, c);
		if (!(mas[i].exst_tr())) {
			mas[i].show();
			cout << " ne sushestvuet" << endl;
			i--;
		}
	}
	for (int i = 0; i < 3; i++) {
		mas[i].show();
		cout << mas[i].perimetr() << " - perimetr" << endl;
		cout << mas[i].square() << " - ploshad'" << endl;
	}
	return 0;
}

