#include <iostream>
using namespace std;
int main()
{
	double list[10];
	cout << "请输入十个数组成一个数组：";
	for (int i = 0; i < 10; i++) {
		cin >> list[i];
	}
	int listSize = sizeof(list) / sizeof(double);
	bool changed = true;
	do
	{
		changed = false;
		for (int j = 0; j < listSize- 1; j++)
			if (list[j] > list[j + 1])
			{
				double temp = list[j];
				list[j] = list[j + 1];
				list[j + 1] = temp;
				changed = true;
			}
	} while (changed);
	cout << "整理后的列表为：";
	for (int k = 0; k < listSize; k++) {
		cout << list[k]<<" ";
	}
	system("pause");
	return 0;
}

