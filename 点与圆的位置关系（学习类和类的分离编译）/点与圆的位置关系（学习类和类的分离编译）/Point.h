#pragma once
#include<iostream>
using namespace std;
/*
头文件中只需要声明各个成员，不写定义
*/
class Point {
private:
    double x, y;
public:
    //设置x、y坐标
    void setx(double a);
    void sety(double a);
    void setxy(double a, double b); //默认参数只能出现头文件和定义文件中的一个，否则发生重定义
    //获取x、y坐标
    double getx();
    double gety();
};