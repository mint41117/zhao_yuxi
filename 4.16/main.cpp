#include <iostream>
#include <string>

using namespace std;

int main()
{
    float a=0,b=0,c=0;
    cout <<"Enter hours  worked(or -1 to end):";
    cin >>a;
    while (a!=-1)
{
     cout <<"Enter hourly rate of the employee ($00.00):";
    cin >>b;

    if(a>40)
    {
        c=400+15*(a-40);
        cout <<"Salary  is  "<<c<<"\n\nEnter hours  worked (or -1 to exit):"<<endl;
          cin >>a;

    }

    else
        c=a*10;
        cout <<"Salary  is "<<c<<"\n\nEnter hours  worked (or -1 to exit):"<<endl;
          cin >>a;


}
    return 0;
}
