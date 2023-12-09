#include <iostream>
using namespace std;
int gys(int a, int b) {
    int i = 1;
    int max = 1;
    while (i <= (a < b ? a : b)) {
        if (a % i == 0 && b % i == 0) {
            max = i;
        }
        i++;
    }
    return max;
}
int main()
{
    int m, n;
    cout << "请输入两个自然数m,n：" << endl;
    cin >> m;
    cin >> n;
    cout << "这两个数的最大公约数是：" << gys(m, n) << endl;
    system("pause");
    return 0;
}
