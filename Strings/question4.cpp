// Input a string of lenght greater than 5  and reverse the substring from position 2 to 5 using inbuilt functions.
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string a = "ABHISHEK How are you boy?";
    cout << a << endl;

    reverse(a.begin()+2, a.begin() +6);
    cout << a;
}