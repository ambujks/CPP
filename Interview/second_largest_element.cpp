#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[5] = {98, 35, 45, 85, 84};
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for(int i = 0; i < n; i++){
        if(arr[i] > largest){
            secondLargest = largest;  // previous largest becomes second largest
            largest = arr[i];         // update largest
        }
        else if(arr[i] > secondLargest && arr[i] != largest){
            secondLargest = arr[i];   // update only second largest
        }
    }

    cout << "Second Largest Element: " << secondLargest;
    return 0;
}
