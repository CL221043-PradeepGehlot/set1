#include <iostream>
using namespace std;

int main() {
    int n;
  cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int duplicateCount = 0;

    for (int i = 0; i < n; i++) {
      
        if (arr[i] == -1) continue; 

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                duplicateCount++; 
                arr[j] = -1;  
                break;  
            }
        }
    }

    cout << "Total number of duplicates: " << duplicateCount << endl;

    return 0;
}

