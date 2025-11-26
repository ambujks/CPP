/* Write a program that lets the user select a tea type from a menu. Use a switch statement to display the price based on the selected tea:-
Green Tea: $2
Black Tea: $3
Oolong Tea: $4*/
#include<iostream>
using namespace std;
int main()
{
    int choice;
    double price;

    cout << "Select your Tea" << endl << "1. Green Tea." << endl << "2. Lemon Tea" << endl <<"3. Oolong Tea" << endl;
    cout << "Enter your choice in number : ";
    cin >> choice;

    switch(choice)
    {
        case 1:
            price = 2.0;
            cout << "You selected Green Tea." << endl << "Price : " << price << endl;
            break;

        case 2:
            price = 3.0;
            cout << "You selected Black Tea." << endl << "Price : " << price << endl;
            break;

        case 3:
            price = 4.0;
            cout << "You selected Oolong Tea." << endl << "Price : " << price << endl;
            break;
            
        default:
            cout << "Invalid choice.";

    }
    return 0;
}