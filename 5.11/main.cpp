#include<iostream>
using  namespace  std;
int main()
{

 for ( int a=0 ;a<10;a++)
  {   for(int b=0;b<=a;b++)
            cout<<"*";
        cout<<endl ;
    }
      for ( int c=0 ;c<10;c++)
  {
      for(int d=10;d>c;d--)
            cout<<"*";
        cout<<endl ;
    }

    for ( int e=0 ;e<10;e++)
  {
       for(int f=1;f<=e;f++)
            {cout<<" ";}
       for(int g=10;g>e;g--)
            {cout<<"*";}

        cout<<endl ;
  }

        for ( int h=0 ;h<10;h++)
  {
       for(int i=8;i>=h;i--)
            {cout<<" ";}
       for(int j=-1;j<h;j++)
            {cout<<"*";}

        cout<<endl ;

    }


}
