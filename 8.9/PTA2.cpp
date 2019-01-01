#include<iostream>
typedef long long  ll;
using namespace std;
int main(){
    ll value1=200000,value2;
    ll * longPtr = &value1;
    cout<<"*longPtr: "<<*longPtr<<endl;
    value2 = *longPtr;
    cout<<"value2: "<<value2<<endl;
    cout<<"address of value1: "<<&value1<<endl;
    cout<<"longPtr: "<<longPtr<<endl;
    return 0;
}
