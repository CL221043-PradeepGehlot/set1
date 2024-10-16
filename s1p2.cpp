#include <iostream>
using namespace std;

int main() {
    int numbers[5];
    
    // Taking 5 integers as input from the user
    cout << "Enter 5 integers: ";
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }
    
    // Finding the maximum number
    int max = numbers[0];
    for (int i = 1; i < 5; i++) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    
    // Printing the maximum number
    cout << "The maximum number is: " << max << endl;
    
    return 0;
}
