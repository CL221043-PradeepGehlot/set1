#include <iostream>
using namespace std;

int main() {
    int numbers[5];

    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    if (numbers[0] == numbers[4] && numbers[1] == numbers[3]) {
        cout << "The array is in palindrome order." << endl;
    } else {
        cout << "The array is not in palindrome order." << endl;
    }

    return 0;
}

