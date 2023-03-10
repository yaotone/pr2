#include <cmath>
#include <iostream>
#include "rational.h"
using namespace std;

int main() {
	int num, a, b;
	cout << "vvedite kolvo elementov: ";
	cin >> num;
	Rational** arr = new Rational * [num];
	for (int i = 0; i < num; i++) {
		cout << "vvedite elementi drobi N" << i + 1 << ": ";
		cin >> a >> b;
		arr[i] = new Rational(a, b);
		if (!arr[i]->valid_prove) {
			i--;
			continue;
		}
		arr[i]->show();
	}
	delete[] arr;
	return 0;
}
