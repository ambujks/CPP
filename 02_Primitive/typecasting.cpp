#include<iostream>
using namespace std;
int main()
{
    float teaPrice = 69.69;
    int roundedTeaPrice = (int) teaPrice;

    int teaQuantity = 2;
    double totalPrice = teaPrice * teaQuantity;

    cout << totalPrice << endl;
    // cout << roundedTeaPrice << endl << teaPrice;

    return 0;
}