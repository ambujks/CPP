#include<iostream>
using namespace std;
int main()
{
    string a = "Ambuj";
    // cout << a.length() << endl;
    // cout << a.size() << endl;

    string s = "I am a good boy.";
    int n = s.length();
    for(int i = 0; i < n; i++){
        cout << s[i] ;
    }

    cout << "\n" << s;

    return 0;
}