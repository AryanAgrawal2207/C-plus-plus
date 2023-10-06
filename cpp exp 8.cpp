#include<iostream>
using namespace std;
class Shape
{
  public:
  virtual void getArea() = 0;
};
class Circle : public Shape
{
  public:
  void getArea()
  {
    cout<<"Enter circle radius: "<<endl;
    int r;
    cin>>r;
    cout<<"Area of the Cirle is: "<<(3.14*r*r)<<endl;
  }
};
class Rectangle : public Shape
{
  public:
  void getArea()
  {
    int l,b;
    cout<<"Enter the length of rectangle: "<<endl;
    cin>>l;
    cout<<"Enter the breadth of rectangle: "<<endl;
    cin>>b;
    cout<<"Area of the Rectangle is: "<<(l*b)<<endl;
  }
};
int main()
{
  Shape * a;
  Circle c;
  a = &c;
  a -> getArea();
  Rectangle r;
  a = &r;
  a -> getArea();
}