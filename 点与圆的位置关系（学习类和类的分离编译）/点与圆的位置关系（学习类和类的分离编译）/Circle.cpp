#include"Circle.h"
//�ඨ���ļ�����Ҫд������Ա�Ķ��壬����Ҫ�������������������::
//Ĭ�ϲ���ֻ�ܳ���ͷ�ļ��Ͷ����ļ��е�һ�����������ض���
//�õ��뾶
double Circle::getr() {
    return r;
}
//���ð뾶
void Circle::setr(double R = 1) {
    r = R;
}
//����x��y����
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
//��ȡx��y����
double Circle::getx() {
    return x;
}
double Circle::gety() {
    return y;
}

//�ж�ĳ���㵽Բ�ľ����ƽ��
double Circle::dis2(Point p1) {
    return (p1.getx() - x) * (p1.getx() - x) + (p1.gety() - y) * (p1.gety() - y);
}
//�жϵ���Բ�Ĺ�ϵ
void Circle::judge(Point p1) {
    if (dis2(p1) > r * r)
        cout << "����Բ��";
    else if (dis2(p1) == r * r)
        cout << "����Բ��";
    else cout << "����Բ��";
}