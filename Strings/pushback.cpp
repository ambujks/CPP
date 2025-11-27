#include<iostream>
#include<string>

using namespace std;
int main()
{
    string a = "Ambuj";
    cout << a << endl;
    cout << "Lenght of the string is : " <<a.length() << endl;

    a.clear(); //to clear the string.
    cout << a << endl << a.length() << endl;

    a.append(" Kumar"); //to add character/string to existing.
    cout << a << endl;
    cout << "Lenght of the string is : " <<a.length() << endl;


    


    a.push_back('a');  //add character at last
    cout << a << endl;

    a.pop_back();
    cout << a << endl; //remove character from last
    

    return 0;
}