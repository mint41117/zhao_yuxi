#include <iostream>
#include <string>
#include<iomanip>

using namespace std;
int  main()

{
    double  a=0,b=0,c=0,d=0;
    cout<<"�뾶";
    cin>>a;
    while(a!=-1)
    {
        b=2*a;
    c=2*3.14159*a;
    d=3.14159*a*a;
   double b=static_cast<double>(a)*2;
     double c=static_cast<double>(a)*2*3.14159;
    double d=static_cast<double>(a)*a*3.14159;
    cout<<setprecision(6)<<fixed;

    cout <<"ֱ��"<<b<<endl;
    cout <<"�ܳ�"<<c<<endl;
    cout <<"���"<<d<<"\n\n �뾶"<<endl;
    cin>>a;
    }

    return 0;
}
