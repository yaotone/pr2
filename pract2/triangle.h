#pragma once

using namespace std;
class triangle
{
private:
	float a;
	float b;
	float c;
public:
	bool exst_tr();
	void set(double a1, double b1, double c1);
	void show();
	double perimetr();
	double square();
};

