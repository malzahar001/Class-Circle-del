#pragma once
#include<iostream>
#include"Point.h"
using namespace std;
/*
ͷ�ļ���ֻ��Ҫ����������Ա����д����
*/
class Circle {
private:
    double r;//�뾶
    double x, y;//Բ������
public:
    //�õ��뾶
    double getr();
    //���ð뾶
    void setr(double R);
    //����x��y����
    void setx(double a);
    void sety(double a);
    void setxy(double a=0, double b=0);//Ĭ�ϲ���ֻ�ܳ���ͷ�ļ��Ͷ����ļ��е�һ�����������ض���
    //��ȡx��y����
    double getx();
    double gety();

    //�ж�ĳ���㵽Բ�ľ����ƽ��
    double dis2(Point p1);
    //�жϵ���Բ�Ĺ�ϵ
    void judge(Point p1);
};
