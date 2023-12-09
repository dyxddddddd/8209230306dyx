#include <iostream>
using namespace std;
int indexOf(const char *s1, const char* s2) {
    int p1 = 0, p2 = 0;
    int str1 = strlen(s1), str2 = strlen(s2);
    while (p2 <= s2 - s1) {
        if (s1[p1] == s2[p2]) {
            int loc = p2;
            while (s1[p1] == s2[loc] && p1 < str1) {
                p1++;
                loc++;
            }
            if (p1 == str1) {
                return p2;
            }
            else {
                p1 = 0;
            }
        }
        p2++;
    }
    return -1;
}
int main()
{
    char s1[1000];
    char s2[1000];
    cout << "Enter the first string:";
    cin.getline(s1, 1000);
    cout << "Enter the second string:";
    cin.getline(s2, 1000);
    if (indexOf(s1, s2) == -1) {
        cout << "字符串s1不是字符串s2的子串" << endl;
    }
    else {
        cout << "字符串s1在字符串s2的下标为：" << indexOf(s1, s2) << endl;
    }
}
