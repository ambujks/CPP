// Input a string of even length and reverse the first half of the string.
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    string a = "Ambuja";
    cout << a << endl;
    int n = a.length();

    // method 1
    // int i = 0;
    // int j = n/2 -1;
    // while (i < j)
    // {
    //     int temp = a[i];
    //     a[i] = a[j];
    //     a[j] = temp;
    //     i++;
    //     j--;
    // }
    // cout << a << endl;

    // method 2
    reverse(a.begin(), a.begin() +n/2);
    cout << a << endl;


    return 0;
}