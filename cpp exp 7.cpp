#include<iostream>
using namespace std;


class MyBase{
 public:
     void show()
      {
      cout<<"Base class show function class"<<endl;
      }
      virtual void print()
      {
      cout<<"Base class Print function called"<<endl;
      }
};

class MyDerived : public MyBase{
     void show()
     {
     cout<<"Derived class show function class"<<endl;
      }
     void print()
      {
      cout<<"Derived class Print function called"<<endl;
      }

};

int main()
{
  MyBase *baseptr;
  MyDerived derivedobj;
  baseptr=&derivedobj;
  baseptr->print();
  baseptr->show();
}
