
#include <iostream>
using namespace std;
int main()
{
	cout << "请输入一个数a" << endl;
	double a;
	cin >> a;
	if (a < 0) {
		cout << "负数没有平方根！" << endl;
	}
	else{
		double x = a, y = 0.5 * (x + a / x);
		while (fabs(y - x) >= 1e-5) {
		x = y;
		y = 0.5 * (x + a / x);
		}
		cout << "a" << "的平方根为" << y << endl;
	}
	//思考2
	cout << "请输入一个数a1" << endl;
	double a1;
	cin >> a1;
	if (a1 < 0) {
		cout << "负数没有平方根！" << endl;
	}
	else {
		double x1 = a1, y1 = 0.5 * (x1 + a1 / x1);
		while (fabs(y1 - x1) >= 1e-10) {
			x1 = y1;
			y1 = 0.5 * (x1 + a1 / x1);
		}
		cout << "a1" << "的平方根为" << y1 << endl;
	}
	system("pause");
	return 0;
}

