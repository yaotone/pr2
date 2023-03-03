
#include <math.h>
// created by grishin i gulyaev together; 
#include <iostream>
#include "figure.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	float x1, x2, x3, x4, y1, y2, y3, y4;
	Figure mas[3] = {Figure(0,0,0,0,0,0,0,0),Figure(0,0,0,0,0,0,0,0),Figure(0,0,0,0,0,0,0,0)};
	for (int i = 0; i < 3; i++) {
		cout << "¬ведите координаты четырехугольника є" << i + 1 << ':'<<endl;
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
		mas[i] = Figure{ x1, x2, x3, x4, y1, y2, y3, y4 };
		mas[i].show();
	}
	return 0;
}

