#include <iostream>
using namespace std;
int main()
{
	double f, c;
	cout << "请输入华氏温度" << endl;
	cin >> f;
	c = int((f - 32) * 5 / 9.0 * 100 + 0.5) / 100.0;
	cout << "摄氏温度为：" << c << endl;
	system("pause");
	return 0;

}
