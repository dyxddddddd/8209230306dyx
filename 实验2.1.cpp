#include <iostream>
using namespace std;
int main()
{
	char zifu;
	cout << "请输入一个字符" << endl;
	cin >> zifu;
	if (zifu >= 'a' && zifu <= 'z') {
		cout << "此为小写字母，输出大写字母：" << (char)((int)zifu - 97 + 65);

	}
	else {
		cout << "此为大写字母，输出ASCII码值：" << (int)zifu;
	}
    system("pause");
    return 0;

}

