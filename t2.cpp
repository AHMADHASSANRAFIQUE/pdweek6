#include<iostream>
using namespace std;
string grade(float average);
float percent(float English,float Maths,float Social,float Chemistry,float Biology);
main()
{
    float English,Maths,Chemistry,Social,Biology;
    string name;
    cout<<"Enter student name: ";
    cin>>name;
    cout<<"Enter marks for English: ";
    cin>>English;
    cout<<"Enter marks for Maths: ";
    cin>>Maths;
    cout<<"Enter marks for Chemistry: ";
    cin>>Chemistry;
    cout<<"Enter marks for Social Science: ";
    cin>>Social;
    cout<<"Enter marks for Biology: ";
    cin>>Biology;
    cout<<"Student Name: "<<name<<endl;
    float average = percent(English,Maths,Social,Chemistry,Biology);
    cout<<"Percentage: "<<average<<"%"<<endl;
    string result = grade(average);
    cout<<"Grade: "<<result;
}
string grade(float average)
{
    if(average <= 100 && average >= 90)
    {
        return "A+";
    }
   else if(average < 90 && average >= 80)
    {
        return "A";
    }
   else if(average < 80 && average >= 70)
    {
        return "B+";
    }
    else if(average < 70 && average >= 60)
    {
        return "B";
    }
    else if(average < 60 && average >= 50)
    {
        return "C";
    }
    else if(average < 50 && average >= 40)
    {
        return "D";
    }
    else if(average < 40)
    {
        return "F";
    }
    return 0;

}
float percent(float English,float Maths,float Social,float Chemistry,float Biology)
{
    float per = ((English+Maths+Chemistry+Social+Biology)*100)/(100*5);
    return per;
}