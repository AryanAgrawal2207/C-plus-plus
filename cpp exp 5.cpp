#include <iostream>
using namespace std;
class Shape
{
  protected:
  int length,width;
  public:
  void getValue(int l,int w )
  {
     length=l;
     width=w;
  }
};
class PaintCost
{
  public:
  int getCost(int area)
  {
    return area *70;
  }
};
class Rectangle:public Shape,public PaintCost
{
  public:
  int getArea()
  {
     return( length*width);
  }
};
int main()
{
  Rectangle rect;
  int area;
  rect.getValue(10,20);
  area=rect.getArea();
  cout<<"Total area is:"<<rect.getArea()<<endl;
  cout<<"The cost of painting is:"<<rect.getCost(area)<<endl;
  return 0;
}