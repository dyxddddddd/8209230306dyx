
#include <iostream>
using namespace std;
int main()
{
	double price = 0.8, sum = 0;
	int num = 2, day = 0;
	while (num <= 100) {
		sum += price * num;
		day += 1;
		num *= 2;

	}
	cout << "每天平均花" << (sum / day) << "元" << endl;
	system("pause");
	return 0;
}

