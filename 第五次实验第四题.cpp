#include <iostream>
using namespace std;
class student {
public:
        student(int num=0, int gra=0) {
        number = num;
        grade = gra;
        }
        int showgrade() {
            return grade;
        }
        int shownumber() {
            return number;
        }
private:
    int number;
    int grade;
};
student max(student stu[]) {
    int maxgra = 0;
    int number = 0;
    for (int i = 0; i < 5; i++) {
        if (stu[i].showgrade() > maxgra) {
            maxgra = stu[i].showgrade();
            number = i;
        }
    }
    return stu[number];
}
int main()
{
    student stu[5];
    cout << "请输入五个学生的学号以及他们的成绩：" << endl;
    for (int i = 0; i < 5; i++) {
        int num, gra;
        cin >> num >> gra;
        stu[i] = student(num, gra);
    }
    cout <<"最高分为："<< max(stu).showgrade() << endl;
    cout << "他的学号是：" << max(stu).shownumber() << endl;
    system("pause");
    return 0;
}

