#include"Point.h"
//�ඨ���ļ�����Ҫд������Ա�Ķ��壬����Ҫ�������������������::
//Ĭ�ϲ���ֻ�ܳ���ͷ�ļ��Ͷ����ļ��е�һ�����������ض���
//����x��y����
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
//��ȡx��y����
double Point::getx() {
    return x;
}
double Point::gety() {
    return y;
}