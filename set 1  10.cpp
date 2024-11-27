#include <iostream>
using namespace std;
 
void printPg(int r, int c) {
    for (int i = 0; i < r; i++) {
    
        for (int j = 0; j < r - i - 1; j++) {
            cout << " ";
        }

        for (int j = 0; j < c; j++) {
            cout << "*";
        }

        cout << endl;
    }
}

int main() {
	cout<<"enter no of rows and columns"<<endl;
    int r, c;

    cin >> r>> c;

    printPg(r, c);

    return 0;
}

