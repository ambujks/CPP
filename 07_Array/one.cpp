#include<iostream>
using namespace std;
int main()
{
    int chaiTemperature [5] = {85, 90, 88, 92, 89};

    int size = sizeof(chaiTemperature)/ sizeof(chaiTemperature[0]);

    cout << "Chai Temperature : " << endl;
    for(int i = 0; i < size; i++)
    {
        cout << chaiTemperature[i] << " degree C" << endl;
    }

    return 0;
}
