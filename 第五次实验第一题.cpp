#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void settime() {
		cout << "请输入时、分、秒：" << endl;
		cin >> hour >> minute >> sec;
	}
	void showtime() {
		cout << "现在的时间是：";
		cout << hour << ":" << minute << ":" << sec << endl;
	}
	
};


int main()
{
	Time tl;           //定义t1为Time类对象
	tl.settime();
	tl.showtime();
	system("pause");
	return 0;
}


