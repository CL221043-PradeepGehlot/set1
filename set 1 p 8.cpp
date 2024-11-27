#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        bool counted = false;

        if (counted) continue;

        int count = 1;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                arr[j] = -1; 
            }
        }

        if (arr[i] != -1) {
            cout << arr[i] << " appears " << count << " times." << endl;
        }
    }

    return 0;
}

