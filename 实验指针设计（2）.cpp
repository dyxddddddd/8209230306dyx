#include <iostream>
using namespace std;
int parseHex(const char* const hexString) {
    int num_dec=0,num_hex;
    for (int i = 0; i <strlen(hexString) ; i++) {
        if ('A' <= hexString[i] && hexString[i]<='F') {
            num_hex = hexString[i] - 'A' + 10;
        }
        else {
            num_hex = hexString[i]-'0';
        }
        num_dec = num_dec * 16 + num_hex;
    }
    return num_dec;
}
int main()
{
    char num[1000];
    cout << "请输入一个十六进制数：" << endl;
    cin.getline(num, 1000);
    cout << "则它的十进制表示为：" << parseHex(num)<<endl;
    system("pause");
    return 0;
}

