
#include <iostream>
using namespace std;
int main()
{
	double a, b, c;
	cout << "请输入三角形的边长a，b，c" << endl;
	cin >> a >> b >> c;

	if (a + b <= c || a + c <= b || b + c <= a) {
		cout << "这三边不能构成三角形！" << endl;
	}
	else {
		cout << "此三角形的周长为：" << (a + b + c) << endl;
		if (a == b || b == c || a == c) {
			cout << "此三角形是等腰三角形" << endl;
		}
		else {
			cout << "此三角形不是等腰三角形" << endl;
		}
	}
	system("pause");
	return 0;
}

