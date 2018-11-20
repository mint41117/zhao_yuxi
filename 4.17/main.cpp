#include <iostream>

using namespace std;

int main()
{
    unsigned  int   counter=1£»
    int largest=0,number=0;

    while (counter<=10)
    {
        cout<<"enter  the  number:";
        cin>>number;



        if(number>=largest)
            largest=number;
        ++counter;
        cout<<counter<<":";

    }
    cout <<"largest  is:" <<largest<<endl ;
    return 0;
}
