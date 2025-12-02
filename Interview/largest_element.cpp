#include <iostream>
#include <climits>

using namespace std;

int main() {

    int arr[5] = {98, 35, 45, 85, 84};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;   // Start with first element

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout << "Largest Element in Array: " << largest;
    return 0;
}
