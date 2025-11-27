#include<iostream>
using namespace std;
int main()
{
    
    int x = 3;
    cout << x << endl;
    cout << &x << endl; //to print the address of x.

    int* p = &x; //store the address of x
    cout << p << endl;

    cout << *p << endl;

    cout << &p << endl; //p address




    // changing the value with the help of pointer

    int y = 5;
    int* ptr = &y;
    cout << y <<endl;
    // cout << *ptr << endl;
    *ptr = 89;
    cout << y <<endl; //now the value will be 89.
    
    *ptr += 5; //incrementing the value of y with the help of pointer
    cout << y << endl;


    return 0;
}
