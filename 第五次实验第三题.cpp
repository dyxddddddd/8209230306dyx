#include <iostream>
using namespace std;
class recTangular {
public:
    recTangular(int l,int w,int h) {
        length = l;
        width = w;
        height = h;
    }
private:
    int length;
    int width;
    int height;
public:
    void calVolume(int num) {
        cout <<"第"<<num<<"个长方柱的体积是：" << (length * width * height) << endl;
    }
};

int main()
{
    for (int i = 0; i < 3; i++) {
        int l, w, h;
        cout << "请输入第" << i + 1 << "个长方柱的长、宽、高" << endl;
        cin >> l >> w >> h;
        recTangular tan(l, w, h);
        tan.calVolume((i+1));
    }
    system("pause");
    return 0;
}

