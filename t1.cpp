#include<iostream>
using namespace std;
string activity(string temp,string humidity);
main()
{
    string temp,humidity;
    cout<<"Enter temperature (warm or cold): ";
    cin>>temp;
    cout<<"Enter humidity (dry or humid): ";
    cin>>humidity;
    string result = activity(temp,humidity);
    cout<<"Recommended activity: "<<result;
}
string activity(string temp,string humidity)
{
    if(temp =="warm" && humidity =="dry")
    {
        return "Play tennis";
    }
    if(temp =="warm" && humidity =="humid")
    {
        return "Swim";
    }
    if(temp =="cold" && humidity =="humid")
    {
        return "Watch TV";
    }
    if(temp =="cold" && humidity =="dry")
    {
        return "Play basketball";
    }
}