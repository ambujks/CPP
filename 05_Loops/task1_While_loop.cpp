/*Write a program that keeps track of tea orders. Each time a cup of tea is made, decrease the number of cups remaining. 
The loop should run until all cups are served.*/
#include<iostream>
using namespace std;
int main()
{
    int teaCups;
    cout << "Enter the number of tea cups to serve : ";
    cin >> teaCups;
    cout << "--------------------------" << endl ;

    // while loop
    while (teaCups > 0)
    {
        teaCups--;
        cout << "Serving a cup of tea \n" << teaCups << " remaining" << endl;
        cout << "--------------------------" << endl ;

    }

    cout << "All Tea Cups are served." << endl ;
    cout << "--------------------------" << endl ;


    return 0;
}