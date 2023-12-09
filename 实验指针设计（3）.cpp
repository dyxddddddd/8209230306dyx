#include <iostream>
using namespace std;
void sort(int arr[],int size) {
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size-i-1; j++) {
			if (arr[j + 1] < arr[j]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "该数组从小到大排序为：" << endl;
	for (int k = 0; k <size ; k++) {
		cout << arr[k] << " ";
	}
}
int main()
{
	int size;
	cout << "请输入动态数组的大小：" << endl;
	cin >> size;
	int* p_s = new int[size];
	cout << "请输入数组元素" << endl;
	for (int i = 0; i < size; i++) {
		cin >> p_s[i];
	}
	cout << "请输入你要观察的元素的位置：" << endl;
	int a;
	cin >> a;
	cout <<"该元素是：" << p_s[a] << endl;
	sort(p_s,size);
	delete [] p_s;
	system("pause");
	return 0;
}


