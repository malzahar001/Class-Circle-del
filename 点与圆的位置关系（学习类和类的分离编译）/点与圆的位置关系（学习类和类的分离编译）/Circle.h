#pragma once
#include<iostream>
#include"Point.h"
using namespace std;
/*
头文件中只需要声明各个成员，不写定义
*/
class Circle {
private:
    double r;//半径
    double x, y;//圆心坐标
public:
    //得到半径
    double getr();
    //设置半径
    void setr(double R);
    //设置x、y坐标
    void setx(double a);
    void sety(double a);
    void setxy(double a=0, double b=0);//默认参数只能出现头文件和定义文件中的一个，否则发生重定义
    //获取x、y坐标
    double getx();
    double gety();

    //判断某个点到圆的距离的平方
    double dis2(Point p1);
    //判断点与圆的关系
    void judge(Point p1);
};
