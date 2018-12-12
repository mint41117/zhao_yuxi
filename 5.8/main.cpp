#include <iostream>

using namespace std;

int main()
{
   int a=0,b=1,c=0,d=9999999;
   cout<<"计算数的个数";
   cin>>a;
   for (b=1;b<=a;b++)
   {

    cin >>c;

    if(c<d)
        d=c;
        else
        d=d;
   }
   cout <<"最小值"<<d;

}
