#include <iostream>
using namespace std;
#define pai 3.14

int main()
{

	int r;
	int h;
	cout << "请输入圆锥的半径" << endl;
	cin >> r;
	cout << "请输入圆锥的高" << endl;
	cin >> h;
	cout << "圆锥的体积为：" << (pai * r * r * h / 3) << endl;
	system("pause");
	return 0;
}

