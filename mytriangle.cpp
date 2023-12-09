#include <iostream>
#include <cmath>
#include "mytriangle.h"
using namespace std;
bool is_valid(double side1, double side2, double side3) {
	if ((side1 + side2) > side3 && (side2 + side3) > side1 && (side1 + side3) > side2) {
		return true;
	}
	else {
		return false;
	}
}
double area(double side1, double side2, double side3) {
	double s = (side1 + side2 + side3) / 2;
	double S= sqrt(s*(s - side1)*(s - side2)*(s - side3));
	return S;
}

int main()
{
	cout << "请输入三角形的三条边长a，b，c：" << endl;
	int a, b, c;
	cin >> a;
	cin >> b;
	cin >> c;
	if(is_valid(a,b,c)==1){
		cout << "三角形的面积是：" << area(a, b, c) << endl;
	}
	else {
		cout << "此三边无法构成三角形！" << endl;
	}
	system("pause");
	return 0;


}

