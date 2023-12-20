#include <iostream>
#include "student.h" //不要漏写此行，否则编译通不过
Student::Student(){}
Student::Student(int Num, const char * Name, char Sex) {
    num = Num;
    memcpy(name, Name, strlen(Name)+1);
    sex = Sex;
}
void Student::display()         //在类外定义display类函数
{
    cout << "num：" << num << endl;
    cout << "name：" << name << endl;
    cout << "sex：" << sex << endl;
}
void Student::set_value() {
    cout << "请输入学生的学号、姓名、性别：" << endl;
    cin >> num;
    cin >> name;
    cin >> sex;
}

