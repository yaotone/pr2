#include "circle.h"
#include <cmath>
#include <iostream>
using namespace std;
Circle::Circle(float r, float x, float y) {
	radius = r;
	x_center = x;
	y_center = y;
}
void Circle::set_circle(float r, float x, float y){
	radius = r;
	x_center = x;
	y_center = y;
}

float Circle::square(){
	return 3.14 * pow(radius, 2);
}
bool Circle::triangle_around(float a, float b, float c){
	float p = (a + b + c) / 2;
	float s = sqrt((p * (p - a) * (p - b) * (p - c)));
	if (radius == ((a * b * c) / (4 * s))) {
		return true;
	}
	else {
		return false;
	}
}
bool Circle::triangle_in(float a, float b, float c)
{
	float k1, k2, base;
	if (a == b == c)
	{
		return radius == ((a * sqrt(3)) / 6);
	}
	else if (a == b || a == c || b == c)
	{
		float eql, based;
		if (a == b)
		{
			eql = a;
			based = c;
		}
		else if (a == c)
		{
			eql = c;
			based = b;
		}
		else
		{
			eql = b;
			based = a;
		}
		return radius == ((based / 2) * sqrt(((2 * eql - based) / (2 * eql + based))));
	}
	else if (((pow(a, 2) + pow(b, 2) == pow(c, 2)) || (pow(a, 2) + pow(c, 2) == pow(b, 2)) || (pow(b, 2) + pow(c, 2) == pow(a, 2))))
	{
		if (pow(a, 2) + pow(b, 2) == pow(c, 2)) {
			k1 = a;
			k2 = b;
			base = c;
		}
		else if (pow(a, 2) + pow(c, 2) == pow(b, 2)) {
			k1 = a;
			k2 = c;
			base = b;
		}
		else if (pow(b, 2) + pow(c, 2) == pow(a, 2)) {
			k1 = b;
			k2 = c;
			base = a;
		}
		return (0.5 * (k1 + k2 - base) == radius);
	}
	else
	{
		return ((square() * 2) / (a + b + c) == radius);
	}
}
bool Circle::check_circle(float r, float x_cntr, float y_cntr) {
	if (x_center == x_cntr and y_center == y_cntr) return true;
	else if (sqrt(pow(x_cntr - x_center, 2) + pow(y_cntr - y_center, 2)) > (r + radius)) return true;
	else return false;
}
