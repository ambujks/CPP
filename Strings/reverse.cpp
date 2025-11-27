#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string a = "Ambuj";
    cout << a << endl;
    // cout << "Lenght of the string is : " << a.length() << endl;

   // reverse string method 1:-
   int n = a.length();
   int i = 0;
   int j = n-1;
   while (i < j)
   {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
   }
   cout << a << endl;


//    reverse string method 2:-
    string z = "Ambuj is a good boy.";
    cout << z << endl;
    reverse(z.begin(), z.end());
    cout << z << endl;
    
    return 0;
}