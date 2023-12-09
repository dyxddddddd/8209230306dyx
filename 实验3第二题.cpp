#include <iostream>
using namespace std;
bool is_prime(int num) {
    int i = 2;
    while (i < num) {
        if (num % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}
int main()
{
    int k = 2;
    int num = 0;
    int max_ten = 0;
    cout << "前两百个素数为：" << endl;
    while (num < 200) {
        if (is_prime(k) == 1) {
            if (max_ten == 9) {
                cout  << k <<'\t' << endl;
                max_ten = -1;
            }
            else {
                cout << k<<'\t';
            }
            max_ten++;
            num++;
        }
        k++;
    }
    system("pause");
    return 0;
}

