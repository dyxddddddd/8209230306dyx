#include <iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int setx, int sety) {
		x = setx;
		y = sety;
	}
	void setPoint(int i, int j) {
		x += i;
		y += j;
	}
	void display() {
		cout << "坐标（60，80）的点移动后的坐标为：" << "(" << x << "," << y << ")" << endl;
	}
};

int main()
{
	Point po(60, 80);
	cout << "请输入点（60，80）横坐标与纵坐标分别移动的长度：" << endl;
	int i, j;
	cin >> i >> j;
	po.setPoint(i, j);
	po.display();
	system("pause");
	return 0;
}

