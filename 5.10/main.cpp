#include <iostream>

using namespace std;

int main()
{
   int a=0,b=0,c=1;
   cout <<"输入要计算的阶乘";
   cin>>a;


   for(b=1;b<=a;++b)
   {
       c=b*c;
   }
   cout<<"\n\n 结果为"<<c;
}
