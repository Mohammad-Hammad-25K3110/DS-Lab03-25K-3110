#include <iostream>
using namespace std;

int main() {
    int arr[] = {90, 20, 80, 30, 70, 40, 60, 50, 10};
    int n = 9;
    int totalComparisons = 0, totalShifts = 0;

    cout << "Original array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;

    for (int gap = n / 2; gap > 0; gap = gap / 2) {
        int comparisons = 0, shifts = 0;
        for (int i = gap; i < n; i++) {
            int temp = arr[i];
            int j = i;
            while (j >= gap) {
                comparisons++;
                if (arr[j - gap] > temp) {
                    arr[j] = arr[j - gap];
                    shifts++;
                    j = j - gap;
                } 
				else {
                    break;
                }
            }
            arr[j] = temp;
        }
        totalComparisons += comparisons;
        totalShifts += shifts;

        cout << "Gap = " << gap << " : ";
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
        cout << "Comparisons for gap " << gap << " = " << comparisons << endl;
        cout << "Shifts for gap " << gap << " = " << shifts << endl;
        cout << endl;
    }

    cout << "Sorted array : ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl << endl;
    cout << "Total Comparisons : " << totalComparisons << endl;
    cout << "Total Shifts : " << totalShifts << endl;
    return 0;
}
