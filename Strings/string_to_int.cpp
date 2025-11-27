#include<iostream>
#include<string>
#include<algorithm>
#include<typeinfo>

using namespace std;

int main()
{
    string a = "2222223";
    cout << a << endl;
    
    int x = stoi(a);
    cout << x << endl;

    // cout << "Type of a : " << typeid(a).name() << endl;
    // cout << "Type of x : " << typeid(x).name() << endl;


    return 0;
}