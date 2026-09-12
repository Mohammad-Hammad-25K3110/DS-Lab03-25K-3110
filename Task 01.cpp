#include <iostream>
using namespace std;

int main() {
    int arr[] = {45, 12, 78, 34, 23, 90};
    int n = 6, comparisons = 0, swaps = 0;
    
    cout << "Original array : ";
    for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl << endl;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swaps++;
            }
        }

        cout << "After Pass " << i + 1 << " : ";
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
    cout << "Total Passes : " << n - 1 << endl;
    cout << "Total Comparisons : " << comparisons << endl;
    cout << "Total Swaps : " << swaps << endl;
    return 0;
}
