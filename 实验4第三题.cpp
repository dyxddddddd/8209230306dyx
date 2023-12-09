#include <iostream>
using namespace std;
int main()
{
	bool flag[100] = { 0 };
	for (int stu = 1; stu <= 100; stu++) {
		for (int i = stu-1; i < 100; i+=stu) {
			flag[i] = 1 - flag[i];
		}
	}
	cout << "到最后开着的柜子的号码是：";
	for (int k = 0; k < 100; k++) {
		if (flag[k] == 1) {
			cout << k + 1 << " ";

		}
	}
	system("pause");
	return 0;
}

