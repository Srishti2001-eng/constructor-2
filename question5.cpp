#include<iostream>
#include<conio.h>
using namespace std;

class test
{
   static int objcnt;
   int objno;
   public:
   test()
   {
      objno=++objcnt;
      cout<<"object no"<<objcnt<<"is created"<<endl;
   }
   ~test()
   {
       
       cout<<"object no"<<objcnt<<"is destroyed"<<endl;
       objcnt--;
   }

   static void printf()
   {
       cout<<"current"<<objcnt<<"no. of object are active"<<endl;
   }
};

int test::objcnt;
int main()
{
    test t1,t2,t3;
    test::printf();


}  
