// Write a C++ program to create Shape class. Derive Circle and Rectangle classes from this (Shape) class. Define proper constructors for these classes. Declare Area method in Circle and Rectangle classes to find the area of that shape, and implement it with proper comments.

#include <iostream>
using namespace std;

class shape
{
public:
   int length;
   int bridth;
};

/*
   derived class : A Derived class is defined as the class derived from the base class.
   syntax : class  <derived_class_name> : <access-specifier> <base_class_name>
   {
      body of code
   }
*/

class Rectangle : public shape
{
   Rectangle(int a, int b)
   {
      length = a;
      bridth = b;
      int areaOfRectengle = a * b;
      // int area(){
      //    cout << "area of rectangle :- " << areaOfRectengle << endl;
      // }
   }
};

class circle : public shape
{
   circle(int radi)
   {
      int areaOfCircle = 3.14 * radi * radi;
      cout << "area of circle :- " << areaOfCircle << endl;
   }
};

int main()
{

   return 0;
}