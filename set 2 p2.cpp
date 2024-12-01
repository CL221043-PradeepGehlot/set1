#include <iostream>
using namespace std;

int countInverse(int arr[], int n) {
    int inverseCount = 0;

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                inverseCount++;
            }
        }
    }

    return inverseCount;
}

int main() {
    int arr[] = {7, 2, 6, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Number of inverse is : " << countInverse(arr, n) << endl;
    return 0;
}
