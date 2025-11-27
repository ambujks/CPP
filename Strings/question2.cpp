// Input a string and Update all the even positions in the string to character 'a'. Consider 0-based indexing.
#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s;
    cout << "Enter the sentence : ";
    getline(cin, s);

    for(int i = 0; i < s.length(); i++){
        if(i%2==0){
            s[i]='a';
        }
    }

    cout << "New line :-" << s << endl;

    return 0;
}


