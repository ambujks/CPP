#include<iostream>
#include<string>
using namespace std;
int main()
{
    
    string userTea;
    int teaQuantity;

    cout << "What you want to order in Tea? : ";
    // cin >> userTea;
    getline(cin, userTea);

    // ask quantity.
    cout <<"How many cups of " << userTea << " would you like to have ? : ";
    cin >> teaQuantity;
    
    cout << teaQuantity << endl;
    cout << userTea;

    return 0;
}