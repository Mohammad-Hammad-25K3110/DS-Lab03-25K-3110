#include <iostream>
using namespace std;

int main() {
    int n;

    while (true) {
        cout << "Enter number of students (5 to 15): ";
        cin >> n;
        if (n < 5 || n > 15) {
            cout << "Invalid input. Number of students must be between 5 and 15." << endl;
        } 
		else {
            break;
        }
    }

    int marks[n];
    for (int i = 0; i < n; i++) {
        while (true) {
            cout << "Enter marks for student " << i + 1 << " (0 to 100): ";
            cin >> marks[i];
            if (marks[i] < 0 || marks[i] > 100) {
                cout << "Invalid marks. Please enter a value between 0 and 100." << endl;
            } 
			else {
                break;
            }
        }
    }

    int comparisons = 0, shifts = 0;
    for (int i = 1; i < n; i++) {
        int insert = marks[i];
        int j = i - 1;
        while (j >= 0) {
            comparisons++;
            if (marks[j] < insert) {
                marks[j + 1] = marks[j];
                shifts++;
                j--;
            } else {
                break;
            }
        }
        marks[j + 1] = insert;
    }

    int highest = marks[0];
    int lowest = marks[0];
    int sum = 0;
    bool highAchieverPresent = false;

    for (int i = 0; i < n; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
        sum = sum + marks[i];
        if (marks[i] >= 90) {
            highAchieverPresent = true;
        }
    }

    double average = (double)sum / n;
    cout << endl << "Total Comparisons : " << comparisons << endl;
    cout << "Total Shifts : " << shifts << endl;
    cout << endl << "Sorted Marks in Descending Order : ";
    for (int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }
    cout << endl <<endl << "Highest Marks : " << highest << endl;
    cout << "Lowest Marks : " << lowest << endl;
    cout << "Average Marks : " << average << endl;

    if (highAchieverPresent) {
        cout << endl << "High Achiever(s) Present" << endl;
    } else {
        cout << endl << "No High Achiever" << endl;
    }

    return 0;
}
