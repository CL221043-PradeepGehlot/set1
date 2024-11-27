#include <iostream>
using namespace std;

int main() {
    int n;
cin >> n;
    
    int numbers[n];

    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    for (int i = 0; i < n; i++) {
        bool unique = true;

        for (int j = 0; j < n; j++) {
            if (i != j && numbers[i] == numbers[j]) {
                unique = false;
                break;
            }
        }
        
        if (unique) {
            cout <<"unique is: " <<numbers[i] << " ";
        }
    }

    return 0;
}

