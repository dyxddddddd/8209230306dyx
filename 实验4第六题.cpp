#include <iostream>
using namespace std;
void count(const char s[], int counts[]) {
    for (int i = 0; i < 1000; i++) {
        int cha = s[i];
        if ('a' <= cha && cha <= 'z') {
            counts[cha - 'a'] += 1;
        }
        else if ('A' <= cha && cha <= 'Z') {
            counts[cha - 'A'] += 1;
        }
        
    }
    for (int k = 0; k < 26; k++) {
        if (counts[k] != 0) {
            cout << char('a' + k) << ":" << counts[k] << "times" << endl;
        }
    }
}
    int main() {
        char str[1000];
        int counts[26] = { 0 };
        cout << "Enter a string:";
        cin.getline(str, 1000);
        count(str, counts);
        system("pause");
        return 0;
    }


