#pragma once
#include <iostream>
using namespace std;
class Student              //ÀàÉùÃ÷
{
public:
	Student();
	Student(int Num,const char * Name, char Sex);
	void display();
	void set_value();
private:
	int num;
	char name[20];
	char sex;
};

