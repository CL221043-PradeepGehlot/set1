#include <iostream>
using namespace std;

int main() {
    int n, num;
     cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
  cout << "Enter the number to search: ";
    cin >> num;

    int found = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == num) {
            found = i;
            break;  
        }
    }

    cout << " is at index: "<<found << endl;

    return 0;
}

