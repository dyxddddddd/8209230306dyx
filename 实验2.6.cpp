
#include <iostream>
using namespace std;
int main()
{
	cout << "请输入两个整数a，b" << endl;
	int a, b;
	cin >> a >> b;
	int i = 1;
	int max = 0;
	while (i <= a && i <= b) {
		if (a % i == 0 && b % i == 0) {
			max = i;
		}
		i++;
	}
	cout << "a和b的最大公约数为" << max << endl;
	cout << "a和b的最小公倍数为" << (a * b / max) << endl;
	system("pause");
	return 0;
}

