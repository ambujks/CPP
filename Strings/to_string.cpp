#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int x = 1234;
    cout << x << endl;

    string s = to_string(x); //convert integer into string.
    cout << s << endl;
    s += "dd";
    cout << s;


    return 0;
}