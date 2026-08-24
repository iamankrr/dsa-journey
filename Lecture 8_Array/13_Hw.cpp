#include <iostream>
using namespace std;

void printUnique(int arr[], int size) {
    cout << "Unique elements: ";
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (arr[i] == arr[j]) {
                count = count + 1;
            }
        }
        if (count == 1) {   // element sirf ek baar aya
            cout << arr[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int arr[] = {4, 2, 7, 2, 9, 4, 5};
    int size = 7;

    printUnique(arr, size);

    return 0;
}
