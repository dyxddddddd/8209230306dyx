
#include <iostream>
using namespace std;
int main()
{
	double a, b;
	cout << "请输入数字a：" << endl;
	cin >> a;
	cout << "请输入一个运算符：" << endl;
	char cal;
	cin >> cal;
	cout << "请输入一个数字b：" << endl;
	cin >> b;
	if (cal == '+') {
		cout << a << cal << b << "=" << (a + b) << endl;
	}
	else if (cal == '-') {
		cout << a << cal << b << "=" << (a - b) << endl;
	}
	else if (cal == '*') {
		cout << a << cal << b << "=" << (a * b) << endl;
	}
	else if (cal == '/') {
		if (b == 0) {
			cout << "除数不可以是0！" << endl;
		}
		else {
			cout << a << cal << b << "=" << (a / b) << endl;
		}

	}
	system("pause");
	return 0;
}

