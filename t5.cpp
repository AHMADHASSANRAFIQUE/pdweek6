#include<iostream>
using namespace std;
float fruitprice(string fruit,string day,double quantity);
main()
{
    string fruit,day;
    double quantity;
    cout<<"Enter the fruit name: ";
    cin>>fruit;
    cout<<"Enter the day of the week (e.g., Monday, Sunday): ";
    cin>>day;
    cout<<"Enter the quantity: ";
    cin>>quantity;
    float output = fruitprice(fruit,day,quantity);
    if(output==0.0)
    {
        cout<<"error";
    }
    else
    {
        cout<<output;
    }
}
float fruitprice(string fruit,string day,double quantity)
{
    if(day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday"
    || day=="Friday" || day=="Saturday")
    {
        if(fruit=="banana")
        {
            return 2.50*quantity;
        }
        else if(fruit=="apple")
        {
            return 1.20*quantity;
        }
        else if(fruit=="orange")
        {
            return 0.85*quantity;
        }
        else if(fruit=="grapefruit")
        {
            return 1.45*quantity;
        }
        else if(fruit=="kiwi")
        {
            return 2.70*quantity;
        }
        else if(fruit=="pineapple")
        {
            return 5.50*quantity;
        }
        else if(fruit=="grapes")
        {
            return 3.85*quantity;
        }
    }
    if(day=="Sunday")
    {
        if(fruit=="banana")
        {
            return 2.70*quantity;
        }
        else if(fruit=="apple")
        {
            return 1.25*quantity;
        }
        else if(fruit=="orange")
        {
            return 0.90*quantity;
        }
        else if(fruit=="grapefruit")
        {
            return 1.60*quantity;
        }
        else if(fruit=="kiwi")
        {
            return 3.00*quantity;
        }
        else if(fruit=="pineapple")
        {
            return 5.60*quantity;
        }
        else if(fruit=="grapes")
        {
            return 4.20*quantity;
        }
    }
     if(day!="Monday" || day!="Tuesday" || day!="Wednesday" || day!="Thursday"
    || day!="Friday" || day!="Saturday" || day !="Sunday" || fruit!="banana" ||
    fruit!="apple" || fruit!="orange" || fruit!="grapefruit" || fruit!="kiwi" 
    || fruit!="pineapple" || fruit!="grapes")
    {
        return 0.0;
    }
}