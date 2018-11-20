#include <iostream>
#include<cmath>
using namespace std;
int main()
{    int x1,y1,x2,y2;
double d;
cout<<"两点之间的坐标分别为(x1,y1),(x2,y2)\n"<<"请输入点(x1,y1)的坐标\n";
 cout<<"x1=";
 cin>>x1;
 cout<<"y1=";
  cin>>y1;
   cout<<"请输入点(x1,y1)的坐标\n";
   cout<<"x2=";
   cin>>x2;
    cout<<"y2=";
    cin>>y2;
    d=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
     cout<<"该两点之间的距离为:"<<d;
      return 0;
      }
