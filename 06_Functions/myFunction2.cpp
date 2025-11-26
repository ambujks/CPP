#include<iostream>
using namespace std;

// call by value
void pourChai(int cups) 
{
    cups = cups + 5;
    cout << "Poured cups : " << cups << endl;
}
int main()
{
    int chaiCups = 2; // if we want so we can also write cup here. same goes for below line.
    pourChai(chaiCups);
    cout << "Total cups are " << chaiCups << endl;
    return 0;
}