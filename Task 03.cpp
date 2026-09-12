#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 5, 50, 60, 70};
    int n = 8;
    int gap = n;
    bool swapped = true;
    int iteration = 0;

    cout << "Original array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    while (gap != 1 || swapped == true) {
        gap = (gap * 10) / 13;
        if (gap < 1) {
            gap = 1;
        }
        swapped = false;
        iteration++;
        
        for (int i = 0; i + gap < n; i++) {
            if (arr[i] > arr[i + gap]) {
                int temp = arr[i];
                arr[i] = arr[i + gap];
                arr[i + gap] = temp;
                swapped = true;
            }
        }

        cout << "Iteration " << iteration << " (gap = " << gap << ") : ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }

    cout << endl << "Sorted array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
