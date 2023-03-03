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
		cout << "ââåäèòå êîîðäèíàòû è ðàäèóñ êðóãà ¹" << i + 1<<':' << endl;
		cin >> a >> b >> c;
		mas[i].set_circle(a, b, c);
		cout << "Ïëîùàäü êðóãà ¹" << i + 1 << ' ' << mas[i].square()<<endl;
		cout << "ñòîðîíû òðåóãîëüíèêà äëÿ êðóãà ¹" << i + 1 <<':'<< endl;
		cin >> a >> b >> c;
		if (mas[i].triangle_around(a, b, c)) {
			cout << "Â êðóã ìîæíî âïèñàòü ýòîò òðåóãîëüíèê"<<endl;
		}
		else {
			cout << "Â êðóã íåëüçÿ âïèñàòü ýòîò òðåóãîëüíèê"<<endl;
		}
		if (mas[i].triangle_in(a, b, c)) {
			cout << "Â òðåóãîëüíèê ìîæíî âïèñàòü ýòîò êðóã"<<endl;
		}
		else {
			cout << "Â òðåóãîëüíèê íåëüçÿ âïèñàòü ýòîò êðóã"<<endl;
		}
		cout <<"Ââîä äàííûõ âòîðîãî êðóãà äëÿ ñðàâíåíèÿ:" << ' ';
		cin >> a >> b >> c;
		if (mas[i].check_circle(a, b, c)) {
			cout << "Îêðóæíîñòè ïåðåñåêàþòñÿ"<<endl;
		}
		else {
			cout << "Îêðóæíîñòè íå ïåðåñåêàþòñÿ"<<endl;
		}
	}

	return 0;
}

