// Input a string of size n and Update all the even positions in the string to character 'a'. Consider 0-based indexing.
#include<iostream>
#include<string>

using namespace std;
int main()
{
    string s = "cow is an animal with four legs.";
    cout << s << endl;
    int count = 0;
    for(int i = 0; i < s.length() ; i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}


