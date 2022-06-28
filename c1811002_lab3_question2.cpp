//LAB 3
//Ece Akdemir
//QUESTION 2

#include<iostream>
#include <iomanip>
using namespace std;
int main ()
{
    int p1, p2, p3, p4 ,p5;
    int keep;
    int c1, c2, c3, c4, c5;
    string s1, s2, s3, s4, s5,a;

    cout<<"Enter game name:";
    cin>>s1;
    cout<<"Enter price:";
    cin>>c1;
    cout<<"Enter percentage:";
    cin>>p1;

    cout<<"\nEnter game name:";
    cin>>s2;
    cout<<"Enter price:";
    cin>>c2;
    cout<<"Enter percentage:";
    cin>>p2;

    cout<<"\nEnter game name:";
    cin>>s3;
    cout<<"Enter price:";
    cin>>c3;
    cout<<"Enter percentage:";
    cin>>p3;

    cout<<"\nEnter game name:";
    cin>>s4;
    cout<<"Enter price:";
    cin>>c4;
    cout<<"Enter percentage:";
    cin>>p4;

    cout<<"\nEnter game name:";
    cin>>s5;
    cout<<"Enter price:";
    cin>>c5;
    cout<<"Enter percentage:";
    cin>>p5;

    cout<<endl<<left<<setw(10)<<"GAME"<<right<<setw(10)<<"PRICE"<<right<<setw(15)
    <<"DISCOUNT"<<right<<setw(20)<<"DISCOUNT PRICE"<<"  "<<left<<setw(10)<<"ACTION";

    if(((c1*p1)/100)<40)
    {
        keep=((c1*p1)/100);
        a="Buy";
    }

    else
    {
        keep=((c1*p1)/100);
        a="Don't Buy";
    }
    cout<<endl<<left<<setw(10)<<s1<<right<<setw(10)<<c1<<right<<setw(15)
    <<p1<<right<<setw(20)<<keep<<"  "<<left<<setw(10)<<a;

    if(((c2*p2)/100)<40)
    {
        keep=((c2*p2)/100);
        a="Buy";
    }

    else
    {
        keep=((c2*p2)/100);
        a="Don't Buy";
    }
    cout<<endl<<left<<setw(10)<<s2<<right<<setw(10)<<c2<<right<<setw(15)
    <<p2<<right<<setw(20)<<keep<<"  "<<left<<setw(10)<<a;

    if(((c3*p3)/100)<40)
    {
        keep=((c3*p3)/100);
        a="Buy";
    }

    else
    {
        keep=((c3*p3)/100);
        a="Don't Buy";
    }
    cout<<endl<<left<<setw(10)<<s3<<right<<setw(10)<<c3<<right<<setw(15)
    <<p3<<right<<setw(20)<<keep<<"  "<<left<<setw(10)<<a;

    if(((c4*p4)/100)<40)
    {
        keep=((c4*p4)/100);
        a="Buy";
    }

    else
    {
        keep=((c4*p4)/100);
        a="Don't Buy";
    }
    cout<<endl<<left<<setw(10)<<s4<<right<<setw(10)<<c4<<right<<setw(15)
    <<p4<<right<<setw(20)<<keep<<"  "<<left<<setw(10)<<a;

    if(((c5*p5)/100)<40)
    {
        keep=((c5*p5)/100);
        a="Buy";
    }

    else
    {
        keep=((c5*p5)/100);
        a="Don't Buy";
    }
    cout<<endl<<left<<setw(10)<<s5<<right<<setw(10)<<c5<<right<<setw(15)
    <<p5<<right<<setw(20)<<keep<<"  "<<left<<setw(10)<<a;


    return 0;
}
