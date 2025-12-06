#include <iostream>

using namespace std;

int main()
{
    int a = 4;
    int b = 5;

    cout << "Value of A : " << a << endl;
    cout << "Value of B : " << b << endl;


    //using 3rd varibale :-
    int temp;
    temp = a;
    a = b;
    b = temp;
    
    // //using Arithmetic operations
    a = a + b;  //4+5=9
    b = a - b;  //9-5=4
    a = a - b;  //9-5=4

    //using bitwise operator
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After SWAPPING :- " << endl;
    cout << "Value of A : " << a << endl;
    cout << "Value of B : " << b << endl;

    return 0;

}