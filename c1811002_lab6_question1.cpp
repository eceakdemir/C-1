#include<iostream>
#include <bits/stdc++.h>
using namespace std;
class Fibonacci{
    public:
        Fibonacci(int lenght);
        generatee();
        print();
        int lenght;
        int * numbers;

};
Fibonacci::Fibonacci(int lenght){
int *arr=new int[lenght];
}
Fibonacci:: generatee(){
    int i,c=0;
    arr[0]=1;
    for(i=1;i<lenght-1;i++)
    {
        arr[i]=arr[i]+c;
        c=arr[i];
        cout<<arr[i];
    }
}

~ Fibonacci(){
delete[] *arr;
}
