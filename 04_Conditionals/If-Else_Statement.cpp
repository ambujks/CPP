/*Write a program that checks if a tea shop is open. If the current hour (input by the user) is between 8 AM and 6 PM, 
the shop is open; otherwise, it’s closed.*/
#include<iostream>
using namespace std;
int main()
{
    int time;
    cout << "Enter the current hour (0-23): ";
    cin >> time;

    if(time >= 6 && time <= 8)
    {
        cout << "Shop is open.";
    }
    else
    {
        cout << "Shop is close.";
    }

    return 0;
}