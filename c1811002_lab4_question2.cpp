// Ece Akdemir
//20181100
//Lab 4 QUESTION 2

#include<iostream>
#include <stdlib.h>
#include <iomanip>
using namespace std;
class Game
{

    public:
    string name;
    int price;
    int perc;
    double dis;
    bool dec;

    bool check(int price, int perc,double *dis)
    {
        if(((price*perc)/100)<40)
        {
            *dis=((price*perc)/100);
            return true;
        }

        else
        {
            *dis=((price*perc)/100);
            return false;
        }
    }

};
int main ()
{
    int i;
    int keep;
    int c1;
    string s1,a;
    Game obj[5];
    for(i=0;i<5;i++)
    {
        cout<<"Enter Game Name:";
        cin>>obj[i].name;
        cout<<"Enter Price:";
        cin>>obj[i].price;
        cout<<"Enter Percentage:";
        cin>>obj[i].perc;
        cout<< endl;
    }

    cout<<endl<<left<<setw(10)<<"GAME"<<right<<setw(10)<<"PRICE"<<right<<setw(15)
    <<"DISCOUNT"<<right<<setw(20)<<"DISCOUNT PRICE"<<"  "<<left<<setw(10)<<"ACTION";

     for(i=0;i<5;i++)
    {
        obj[i].dec=obj[i].check(obj[i].price,obj[i].perc,&obj[i].dis);

        cout<<endl<<left<<setw(10)<<obj[i].name<<right
        <<setw(10)<<obj[i].price<<right<<setw(15)
        <<obj[i].perc<<right<<setw(20)<<obj[i].dis<<"  "
        <<left<<setw(10)<<obj[i].dec;
    }

    return 0;
}
