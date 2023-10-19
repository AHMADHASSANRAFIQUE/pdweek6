#include<iostream>
using namespace std;
string checkStudentStatus(int start_h,int start_m,int arrival_h,int arrival_m);
main()
{
    float start_h,start_m,arrival_h,arrival_m;
    cout<<"Enter Exam Starting Time (hour): ";
    cin>>start_h;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>>start_m;
    cout<<"Enter Student hour of arrival: ";
    cin>>arrival_h;
    cout<<"Enter Student minutes of arrival: ";
    cin>>arrival_m;

    cout<<checkStudentStatus(start_h,start_m,arrival_h,arrival_m);
}
string checkStudentStatus(int start_h,int start_m,int arrival_h,int arrival_m)
{
    int result = (start_h*60)+start_m;
    int result1 = (arrival_h*60)+arrival_m;
    if(result-result1<=30 && result-result1>=0)
    {
        if(result-result1>0)
        {
        int nresult = result - result1;
        return "On time""\n" + to_string(nresult) + " minutes before the start";
        }
    return "On time";
    }
    if(result-result1>30)
    {
        int nresult = result - result1;
        if(nresult>=60)
        {
            int nresult_h = nresult/60;
            int nresult_m = nresult%60;
            return "Early""\n" + to_string(nresult_h) + ":" + to_string(nresult_m) + " hours before the start";     
        }
        return "Early""\n" + to_string(nresult) + " minutes before the start";
    }
    if(result-result1<0)
    {
        int nresult = result1-result;
        if(nresult>=60)
        {
        int nresult_h = nresult/60;
        int nresult_m = nresult%60;
        return "Late""\n" + to_string(nresult_h) + ":" + to_string(nresult_m) + " hours after the start";
        }
        return "Late""\n" + to_string(nresult) + " minutes after the start";
    }
}