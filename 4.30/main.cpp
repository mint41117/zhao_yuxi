#include <iostream>
#include <string>
#include<iomanip>

using namespace std;
int  main()

{
    double  a=0,b=0,c=0,d=0;
    cout<<"半径";
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

    cout <<"直径"<<b<<endl;
    cout <<"周长"<<c<<endl;
    cout <<"面积"<<d<<"\n\n 半径"<<endl;
    cin>>a;
    }

    return 0;
}
