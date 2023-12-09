#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
	int p1 = 0, p2 = 0, p3 = 0;
	while (p1<size1&&p2<size2) {
		if (list1[p1] < list2[p2]) {
			list3[p3] = list1[p1];
			p3++;
			p1++;
		}
		else {
			list3[p3] = list2[p2];
			p3++;
			p2++;
		}
	}
	if (p1 == size1) {
		for (; p2 < size2; p2++) {
			list3[p3] = list2[p2];
			p3++;
		}
	}
	else {
		for (; p1 < size1; p1++) {
			list3[p3] = list1[p1];
			p3++;
		}
	}
		cout << "合并后的数组为：";
		for (int k = 0; k < (size1 + size2);k++) {
			cout << list3[k] << " ";
		
	}
	

}
int main() {
		cout << "Enter list1:";
		int num1;
		cin >> num1;
		int* list1 = new int[num1];
		for (int i = 0; i < num1; i++) {
			cin >> list1[i];
		}
		cout << "Enter list2:";
		int num2;
		cin >> num2;
		int* list2 = new int[num2];
		for (int j = 0; j < num2; j++) {
			cin >> list2[j];
		}
		int* list3 = new int[num1 + num2];
		merge(list1, num1, list2, num2 ,list3);
		
		system("pause");
		return 0;
}
