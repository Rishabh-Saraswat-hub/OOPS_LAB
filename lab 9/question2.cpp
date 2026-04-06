#include <iostream>
using namespace std;
template <typename T>
T findmin(T arr[], int n) {
    T minVal = arr[0]; 
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}
int main() {
    int arr[] = {5, 2, 9, 1, 7};
    cout << "Minimum in int array: " << findmin(arr, 5) << endl;
    return 0;
}
