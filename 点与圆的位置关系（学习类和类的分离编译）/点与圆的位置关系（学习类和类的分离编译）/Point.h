#pragma once
#include<iostream>
using namespace std;
/*
ͷ�ļ���ֻ��Ҫ����������Ա����д����
*/
class Point {
private:
    double x, y;
public:
    //����x��y����
    void setx(double a);
    void sety(double a);
    void setxy(double a, double b); //Ĭ�ϲ���ֻ�ܳ���ͷ�ļ��Ͷ����ļ��е�һ�����������ض���
    //��ȡx��y����
    double getx();
    double gety();
};