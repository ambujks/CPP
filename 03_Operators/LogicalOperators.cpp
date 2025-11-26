/*Create a program that checks if a user is eligible for a tea subscription discount. The discount applies if the user is either 
a student or has purchased more than 15 cups. Ask the user to input their status (student or not) and their cup count.*/
#include<iostream>
using namespace std;
int main()
{
    int ifEligible, cupCount;
    bool student;

    cout << "Are you a Student (1 for \"Yes\" and 0 for \"No\") : ";
    cin >> student;

    cin.ignore();

    cout << "Enter the how many cups you have : ";
    cin >> cupCount;

    if(student == true || cupCount > 15)
    {
        cout << "You are eligible for a tea subscription discount.";
    }
    else
    {
        cout << "You are not eligible.";
    }

    return 0;
}