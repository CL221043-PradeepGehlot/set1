#include <iostream>
using namespace std;

int main() {
 
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8};
    

    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
   
    int merg[size1 + size2];
    
    int i = 0, j = 0, k = 0; 

    while (i < size1 && j < size2)
	 {
        if (arr1[i] < arr2[j]) {
            merg[k++] = arr1[i++]; 
        } else {
            merg[k++] = arr2[j++]; 
        }
    }

  
    while (i < size1) {
        merg[k++] = arr1[i++];
    }

    while (j < size2) {
        merg[k++] = arr2[j++];
    }

    cout << "Merg array: ";
    for (int m = 0; m < size1 + size2; m++) {
        cout << merg[m] << " ";
    }
    cout << endl;

    return 0;
}

