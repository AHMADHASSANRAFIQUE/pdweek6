#include <iostream>
using namespace std;
string hotelPrice(string month, int stays);

main()
{
    string month;
    int stays;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> stays;
    string output = hotelPrice(month, stays);
    cout<<output;
}

string hotelPrice(string month, int stays)
{
    
    float studio_price;
    float apartment_price;
    
    if ((month == "May" || month == "October") && stays <= 7)
    {
        studio_price = 50;
        apartment_price = 65;
    }

    else if ((month == "May" || month == "October") && (stays > 7 && stays <= 14))
    {
        studio_price = 50;
        studio_price = studio_price - studio_price * 0.05;
        apartment_price = 65;
    }
    
    else if ((month == "May" || month == "October") && stays > 14)
    {
        studio_price = 50;
        studio_price = studio_price - studio_price * 0.3;
        apartment_price = 65;
        apartment_price = apartment_price - apartment_price * 0.1;
    }
    
    if ((month == "June" || month == "September") && stays <= 7)
    {
        studio_price = 75.20;
        apartment_price = 68.70;
    }
    
    else if ((month == "June" || month == "September") && stays > 14)
    {
        studio_price = 75.20;
        studio_price = studio_price - (studio_price * 0.2);
        apartment_price = 68.70;
        apartment_price = apartment_price - (apartment_price * 0.1);
    }
    
    else if ((month == "June" || month == "September") && stays == 14)
    {
        studio_price = 75.20;
        apartment_price = 68.70;
    }
    
    if ((month == "July" || month == "August") && stays <= 7)
    {
        studio_price = 76;
        apartment_price = 77;
    }
    
    else if ((month == "July" || month == "August") && stays > 14)
    {
        studio_price = 76;
        apartment_price = 77;
        apartment_price = apartment_price - (apartment_price * 0.1);
    }

    apartment_price = apartment_price * stays;
    studio_price = studio_price * stays;
    return "Apartment: " + to_string(apartment_price) + "$.\nStudio: " + to_string(studio_price) + "$.";
}
