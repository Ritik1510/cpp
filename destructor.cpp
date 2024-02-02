#include <iostream>
using namespace std;

class test
{

public:
   // constructor for test
   test()
   {
      cout << "called constructor !! " << endl;
   }

   // user defined destructor
   ~test()
   {
      cout << "called destructor !! " << endl;
   }
};

int main()
{
   test t1, t2, t3; 
   return 0;
}