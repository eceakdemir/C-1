//Lab 3
//Ece Akdemir
//Question 1

#include <iostream>
#include <iomanip>
using namespace std;
int main ()
{
    string car1,car2,car3,car4,car5;
    int d1,d2,d3,d4,d5;
    int k1, k2, k3, k4, k5;
    string keep;
    cout<<"Enter car model: ";
    cin>>car1;
    cout<<"\nEnter total distance: ";
    cin>>d1;
    cout<<"\nEnter last km: ";
    cin>>k1;

    cout<<"Enter car model: ";
    cin>>car2;
    cout<<"\nEnter total distance: ";
    cin>>d2;
    cout<<"\nEnter last km: ";
    cin>>k2;

    cout<<"Enter car model: ";
    cin>>car3;
    cout<<"\nEnter total distance: ";
    cin>>d3;
    cout<<"\nEnter last km: ";
    cin>>k3;

    cout<<"Enter car model: ";
    cin>>car4;
    cout<<"\nEnter total distance: ";
    cin>>d4;
    cout<<"\nEnter last km: ";
    cin>>k4;

    cout<<"Enter car model: ";
    cin>>car5;
    cout<<"\nEnter total distance: ";
    cin>>d5;
    cout<<"\nEnter last km: ";
    cin>>k5;

    cout<<setw(10)<<endl<<"CAR"<<setw(10)<<"TOTAL KM"<<setw(10)<<"LAST KM"<<setw(20)<<"NEEDS MAINTAINANCE"<<endl;
    if(d1-k1>10000)
        keep="YES";
    else
        keep="NO";
    cout<<setw(10)<<car1<<setw(10)<<d1<<setw(10)<<k1<<setw(10)<<keep<<endl;

    if(d2-k2>10000)
        keep="YES";
    else
        keep="NO";
    cout<<setw(10)<<car2<<setw(10)<<d2<<setw(10)<<k2<<setw(10)<<keep<<endl;

    if(d3-k3>10000)
        keep="YES";
    else
        keep="NO";
    cout<<setw(10)<<car3<<setw(10)<<d3<<setw(10)<<k3<<setw(10)<<keep<<endl;

    if(d4-k4>10000)
        keep="YES";
    else
        keep="NO";
    cout<<setw(10)<<car4<<setw(10)<<d4<<setw(10)<<k4<<setw(10)<<keep<<endl;

    if(d5-k5>10000)
        keep="YES";
    else
        keep="NO";
    cout<<setw(10)<<car5<<setw(10)<<d5<<setw(10)<<k5<<setw(10)<<keep<<endl;

    return 0;
}
