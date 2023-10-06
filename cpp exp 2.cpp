#include <iostream>
using namespace std;
class student
{
public:
char name[30];
int rollNo;
int marks1;
int marks2;
float avg;
void accept()
  {
	cout << "Enter name: " ;
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter marks of subject 1: ";
    cin >> marks1;
    cout << "Enter marks of subject 2: ";
    cin >> marks2;
    avg=(marks1+marks2)/2;
  }
void display()
  {
  	cout << "\nStudent details:\n";
    cout << "Name:"<< name << "\nRoll Number:" << rollNo <<
	        "\nSubject 1 marks:" << marks1 << "\nSubject 2 marks:" << marks2 <<
            "\nAverage:" << avg;
  }
};
int main()
{
 cout << "Enter details of student " << ":\n";
 student s;
 s.accept();
 s.display();
 return 0;
}