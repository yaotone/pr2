#include <cmath>
#include <iostream>
#include "eq2.h"
using namespace std;

int main() {
	Eq2* urav1, * urav2;
	double a, b, c, a1, b1, c1;
	cout << "vvedite koeficenti 1 i vtorogo uravnenia:" << " ";
	cin >> a >> b >> c >> a1 >> b1 >> c1;
	urav1 = new Eq2(a, b, c);
	urav2 = new Eq2(a1, b1, c1);
	*urav1 = *urav1 + *urav2;
	cout << "result: ";
	cout << urav1->a << ' ' << urav1->b << ' ' << urav1->c << endl;
	a = urav1->find_x();
	cout << "X = " << a << ' ';
	cout << "Y = " << urav1->find_y(a);
	return 0;
}

