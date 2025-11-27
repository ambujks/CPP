#include<iostream>
using namespace std;
int main()
{
    // char arr[5] = {'A', 'M', 'B', 'U', 'J'};
    // for(int i = 0; i < 5; i++){
    //     cout <<arr[i];
    // }

    // string x = "Ambuj is a boy.";
    // cout << x ;

    string s;
    // cin >> s; // cin Reads only until the first whitespace.
    getline(cin,s); 
    cout << s;

    return 0;
}