#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<iostream>
#include<queue>
using namespace std;
#define MAX_SIZE 1001
#define SIZE 5

int main()
{
    unsigned int values[5];
    for(int i=0;i<5;i++)
        values[i]=i*2;

    cout<<"values :";
    for(int i=0;i<5;i++)
        cout<<values[i]<<" ";

    unsigned int *vPtr=values;
    vPtr = &values[0];
    cout<<endl;

    cout<<"values :";
    for(int i=0;i<5;i++){
        cout<<*(values+i)<<" ";
    }
        cout<<endl;

    cout<<"values :";
    for(int i=0;i<5;i++){
        cout<<*(vPtr)<<" ";
        vPtr++;
    }
    cout<<endl;
    unsigned int a=values[4];
    cout<<"a:"<<a<<endl;
    a=*(values+4);
    cout<<"a:"<<a<<endl;
    a=*(vPtr+4);
    cout<<"a:"<<a<<endl;
    return 0;
}
