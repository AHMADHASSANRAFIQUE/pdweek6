#include<iostream>
using namespace std;
string z(int dob,string month);
main()
{
    int dob;
    string month;
    cout<<"Enter the date of birth: ";
    cin>>dob;
    cout<<"Enter humidity the month of birth (e.g., January, February): ";
    cin>>month;
    string result = z(dob,month);
    cout<<"Zodiac Sign: "<<result;
}
string z(int dob,string month)
{
    if((dob >= 21 && month =="March") || (dob <=19 && month =="April"))
    {
        return "Aries";
    }
    else if((dob >= 20 && month =="April") || (dob <=20 && month =="May"))
    {
        return "Taurus";
    }
    else if((dob >= 21 && month =="May") || (dob <=20 && month =="June"))
    {
        return "Gemini";
    }
    else if((dob >= 21 && month =="June") || (dob <=22 && month =="July"))
    {
        return "Cancer";
    }
     else if((dob >= 23 && month =="July") || (dob <=22 && month =="August"))
    {
        return "Leo";
    }
     else if((dob >= 23 && month =="August") || (dob <=22 && month =="Semtember"))
    {
        return "Virgo";
    }
     else if((dob >= 23 && month =="September") || (dob <=22 && month =="October"))
    {
        return "Libra";
    }
     else if((dob >= 23 && month =="October") || (dob <=21 && month =="November"))
    {
        return "Scorpio";
    }
    else if((dob >= 22 && month =="November") || (dob <=21 && month =="December"))
    {
        return "Sagittarius";
    }
    else if((dob >= 22 && month =="December") || (dob <=19 && month =="Junuary"))
    {
        return "Capricorn";
    }
    else if((dob >= 20 && month =="January") || (dob <=18 && month =="February"))
    {
        return "Aquarius";
    }
    else if((dob >= 19 && month =="February") || (dob <=20 && month =="March"))
    {
        return "Pisces";
    }
    else {
	return 0;}
}
