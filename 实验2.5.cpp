
#include <iostream>
using namespace std;
int main()
{
	cout << "请输入一串字符" << endl;
	int character = 0, number = 0, blank = 0, other = 0;
	char ch;
	while ((ch = getchar()) != '\n') {
		if (('a' <= ch && ch <= 'z') || ('A' <= ch && ch <= 'Z')) {
			character += 1;
		}
		else if ('0' <= ch && ch <= '9') {
			number += 1;
		}
		else if (ch == ' ') {
			blank += 1;
		}
		else {
			other += 1;
		}
	}
	cout << "字符串有" << character << "个" << endl;
	cout << "数字有" << number << "个" << endl;
	cout << "空格有" << blank << "个" << endl;
	cout << "其他字符有" << other << "个" << endl;
	system("pause");
	return 0;
}

