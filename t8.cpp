#include<iostream>
using namespace std;
int play(string year,int holidays,int weekends);
main()
{
    string year;
    int holidays,weekends;
    cout<<"Enter year type: ";
    cin>>year;
    cout<<"Enter number of holidays: ";
    cin>>holidays;
    cout<<"Enter number of weekends: ";
    cin>>weekends;
    cout<<play(year,holidays,weekends);
}

int play(string year,int holidays,int weekends)
{
    int play1,play2;
    if(year == "leap")
    {
        holidays = holidays * 0.67;
        weekends = weekends * 0.75;
        play1 = holidays + weekends;
        play2 = 48 - 48 * 0.15;
        play2 = play2 + play1 + 1;
    }
    
    else
    {
        holidays = holidays * 0.67;
        weekends = weekends * 0.75;
        play1 = holidays + weekends;
        play2 = 48 - 48 * 0.15;
        play2 = play2 + play1;
        play2 = play2 - play2 * 0.15;
        if (play2 >= 44)
            play2 += 2;
        play2 += 1;
    }

    return play2;
    
}
