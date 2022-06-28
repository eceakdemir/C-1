//LAB 3
//ECE AKDEMiR
//201811002

#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a[10],a2[10],a3[10],b[10][10];
    int temp  = 0;
    char c[10][40];
    int i,t;
    cout<<"Enter 10 integer: ";
    for(i=0;i<10;i++)
        cin>>a[i];

    for(i=0;i<10;i++)
      {
          a2[i]=a[i];
          a3[i]=a[i];
      }

    cout<<setw(10)<<"NUMBER"<<setw(10)<<"OCTAL"
    <<setw(10)<<"HEX"<<endl;

   for(i=0;i<10;i++)
   {
       cout<<setw(10)<<a[i]<<setw(10)<<setbase(8)<<a[i]
    <<setw(10)<<setbase(16)<<a[i]<<endl;
   }
    return 0;
}
