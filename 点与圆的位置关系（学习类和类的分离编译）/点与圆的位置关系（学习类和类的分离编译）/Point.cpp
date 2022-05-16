#include"Point.h"
//类定义文件中需要写各个成员的定义，并且要加上所属的类的作用域::
//默认参数只能出现头文件和定义文件中的一个，否则发生重定义
//设置x、y坐标
void Point::setx(double a) {
    x = a;
}
void Point::sety(double a) {
    y = a;
}
void Point::setxy(double a = 0, double b = 0) {
    x = a;
    y = b;
}
//获取x、y坐标
double Point::getx() {
    return x;
}
double Point::gety() {
    return y;
}