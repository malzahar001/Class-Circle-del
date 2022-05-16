#include<iostream>
#include"Circle.h"
#include"Point.h"
using namespace std;


int main() {
    Circle c1;
    Point p1;
    c1.setxy();
    p1.setxy(3,0);
    c1.setr(3);
    c1.judge(p1);

    return 0;
}