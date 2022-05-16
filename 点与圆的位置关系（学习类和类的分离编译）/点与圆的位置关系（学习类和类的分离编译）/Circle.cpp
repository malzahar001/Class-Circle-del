#include"Circle.h"
//类定义文件中需要写各个成员的定义，并且要加上所属的类的作用域::
//默认参数只能出现头文件和定义文件中的一个，否则发生重定义
//得到半径
double Circle::getr() {
    return r;
}
//设置半径
void Circle::setr(double R = 1) {
    r = R;
}
//设置x、y坐标
void Circle::setx(double a) {
    x = a;
}
void Circle::sety(double a) {
    y = a;
}
void Circle::setxy(double a, double b) {
    x = a;
    y = b;
}
//获取x、y坐标
double Circle::getx() {
    return x;
}
double Circle::gety() {
    return y;
}

//判断某个点到圆的距离的平方
double Circle::dis2(Point p1) {
    return (p1.getx() - x) * (p1.getx() - x) + (p1.gety() - y) * (p1.gety() - y);
}
//判断点与圆的关系
void Circle::judge(Point p1) {
    if (dis2(p1) > r * r)
        cout << "点在圆外";
    else if (dis2(p1) == r * r)
        cout << "点在圆上";
    else cout << "点在圆内";
}