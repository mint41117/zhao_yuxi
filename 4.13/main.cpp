#include <iostream>
#include <string>
#include<iomanip>

using namespace std;

int main()
{
    double  a=0,b=0,c=0,d=0,e=0,f=0;
    cout <<"Enter miles  driven(or -1 to end):";
    cin >>a;
    while (a!=-1)
{
     cout <<"Enter  gallons used:";
    cin >>b;
    c=a/b;
    d=a+d;
    e=b+e;
    f=d/e;
    double   c=static_cast<double>(a)/b;
    double   f=static_cast<double>(d)/e;

    cout <<setprecision(6)<<fixed;

    cout <<"MPG  this trip: "<<c<<endl;

    cout <<"Total MPG: "<<f<<"\n\nEnter miles  driven (or -1 to exit):"<<endl;



        cin >>a;
}
     return  0;
}
