//CIRCLE.CPP
//����������� �������-��������� ������ ����
#include "circle.h"
#include <iostream>
#include <iomanip>
#include <conio.h>
using namespace std;

//����������� ������ circle �������� �����������  point � ���������������� ���������, ����� ������ ��������� �������� �������
Circle::Circle(double r, double a, double b)
  :Point (a, b) //����� ������������ �������� ������
  { radius =r; }
  
  //��������� ������� �����
  void Circle::setRadius (double r) {radius = r;}
  
  //��������� ������� �����
  double Circle::getRadius() const {return radius;}
  
  //���������� ������� �����
  double Circle::area() const
  {return 3.14*radius*radius; }
  
  //����� ������ �����(���������� x, y ��������� � protected-������ �� ������������ ������ point(�� point.h)
  ostream &operator << (ostream &output, const Circle &c)
  {
    output<<"Center = ["<<c.x<<", "<<c.y<<"]; Radius ="<<setiosflags(ios::showpoint)<<setprecision(2)<<c.radius;
    return output; //����������� ��������� �������
    }