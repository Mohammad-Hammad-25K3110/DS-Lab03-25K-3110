#include <iostream>
using namespace std;

int main() {
    int arr[] = {55, 61, 67, 72, 78, 81, 80, 85};
    int n = 8, comparisons = 0, swaps = 0;
    int passesUsed = 0;
    cout << "Original array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
	cout << endl << endl << "Modified Bubble Sort";

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
                swapped = true;
            }
        }
        passesUsed++;
    
        cout << endl << "After Pass " << i + 1 << " : ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        if (!swapped) {
            break;
        }
    }

    cout << endl << "Sorted array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Passes Used : " << passesUsed << endl;
    cout << "Total Comparisons : " << comparisons << endl;
    cout << "Total Swaps : " << swaps << endl;
    
    // the array was sorted correctly in the first pass using the modified bubble sort 
	// but it was confirmed by the second pass that every element was in the correct order
    // hence the program  terminated after the second pass
    
    cout << endl << "Standard Bubble Sort" << endl;
	int standardPasses = n - 1;
    int standardComparisons = 0;
    for (int i = 0; i < standardPasses; i++) {
        standardComparisons += (n - i - 1);
    }
    cout << "Total Passes : " << standardPasses << endl;
    cout << "Total Comparisons : " << standardComparisons << endl;
    return 0;
}
    
    
