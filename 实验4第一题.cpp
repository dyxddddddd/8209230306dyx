#include <iostream>
using namespace std;
int main(){

	int a[10] = { 0 };
	cout << "Enter ten numbers:";
	cin >> a[0];
	int p = 0;
	for (int i = 1; i <= 9; i++) {
		int num;
		cin >> num;
		bool repeat = false;
		for (int j = 0; j <= p; j++) {
			if (num == a[j]) {
				repeat = true;
				break;
			}	
		}
		if (repeat == false) {
			a[++p] = num;
		}
	}
	cout << "The distinct numbers are:";
	for (int k = 0; k <= p; k++) {
		cout << a[k]<<"  ";
	}
	system("pause");
	return 0;
}



