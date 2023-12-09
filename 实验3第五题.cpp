#include <iostream>
using namespace std;
int fac(int day) {
	if (day == 1) {
		return 1;
	}
	else {
		return (fac(day-1) +1)*2;
	}
}
int main()
{
	cout << "第一天猴子共摘了" << fac(10) << "个桃子" << endl;
	system("pause");
	return 0;
}

