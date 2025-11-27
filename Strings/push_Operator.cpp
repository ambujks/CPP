#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a = "Ambuj";
    cout << a << endl;
    cout << "Lenght of the string is : " << a.length() << endl;

    // a = a + " Kumar Singh";
    // cout << a << endl;
    // cout << "Lenght of the string is : " << a.length() << endl;

    a = "Master " + a;
    cout << a << endl;
    cout << "Lenght of the string is : " << a.length() << endl;
    
    return 0;
}