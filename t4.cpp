#include<iostream>
using namespace std;
float case1(float min);
float case3(float min);
float case2(float min);
main()
{
    char service,time;
    float min;
    float amount1,amount2,amount3;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>>service;
    if(service=='r'  || service=='R')
    {
        cout<<"Enter the number of minutes used: ";
        cin>>min;
        amount1 = case1(min);
        cout<<"Service Type: Regular"<<endl;
        cout<<"Total Minutes Used: "<<min<<" minutes"<<endl;
        amount1 = case1(min);
        cout<<"Amount Due: $"<<amount1;

    }
    if(service=='P' || service=='p')
    {
        cout<<"Enter time of the call (D/d for day, N/n for night): ";
        cin>>time;
        if(time=='N' || time =='n')
        {
        cout<<"Enter the number of minutes used: ";
        cin>>min;
        cout<<"Service Type: Premium"<<endl;
        cout<<"Total Minutes Used: "<<min<<" minutes"<<endl;
        amount2 = case2(min);
        cout<<"Amount Due: $"<<amount2;
        }
    }
    if(time=='D' || time=='d')
    {
        cout<<"Enter the number of minutes used: ";
        cin>>min;
        cout<<"Service Type: Premium"<<endl;
        cout<<"Total Minutes Used: "<<min<<" minutes"<<endl;
        amount3 = case3(min);
        cout<<"Amount Due: $"<<amount3;
    }
    return 0.0;
    
}
    float case3(float min)
    {
        float total=25.00;
        if(min>75)
        {
        total = 25.00 + ((min - 75)*0.10);
        }
        return total;
    
    }
    float case2(float min)
    {
        float total = 25.00;
        if(min>100)
        {
        total = 25.00 + ((min - 100)*0.05);
        }
        return total;
    }
    float case1(float min )
    {
        float total =10.00;
        if(min>50)
        {
        total = 10.00 + ((min-50)*0.20);
        }
        return total;
    }
    