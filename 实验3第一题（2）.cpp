#include <iostream>
using namespace std;
int gys(int& a, int& b) {
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
int gbs(int& a1, int& b1 , int & x_gys) {
    return (a1 * b1 / x_gys);
}
int main()
{
    int m, n;
    cout << "请输入两个自然数m,n：" << endl;
    cin >> m;
    cin >> n;
    int x_gys = gys(m, n);
    cout << "这两个数的最大公约数是：" << x_gys << endl;
    cout << "这两个数的最小公倍数为：" << gbs(m, n, x_gys) << endl;
    system("pause");
    return 0;
}
