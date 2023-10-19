#include <iostream>
#include <string>
using namespace std;
string position(int height, int x, int y);
main()
{
    int height, x, y;
    cout<<"Enter height: ";
    cin>>height;
    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;
    string output=position(height, x, y);
    cout<<output;
}

string position(int height, int x, int y) {
    bool onBorder = (x >= 0 && x <= 3 * height && (y == 0 || y == height)) || (y >= 0 && y <= 4 * height && (x == 0 || x == 2 * height)) || (x == height && y >= height && y <= 3 * height);
    if (onBorder)
    {
        return "Border";
    }
    else if (x > 0 && x < 2 * height && y > 0 && y < 4 * height)
    {
        return "Inside";
    }
    else
    {
        return "Outside";
    }

}