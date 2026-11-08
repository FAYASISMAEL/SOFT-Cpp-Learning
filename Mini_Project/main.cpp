#include <iostream>
using namespace std;

// Function declarations (as shown in the lecture)
void readMarks(int marks[], int n);
int findTotal(int marks[], int n);
double findAverage(int marks[], int n);
int findHighest(int marks[], int n);
int findLowest(int marks[], int n);
int countPassed(int marks[], int n);
void printReport(int marks[], int n);

int main() {
    const int MAX = 100;
    int marks[MAX];
    int n;
    char choice;

    do {
        // Ask number of students and validate
        do {
            cout << "Enter number of students (1-100): ";
            cin >> n;
            if (n < 1 || n > 100)
                cout << "Invalid! Please enter a number between 1 and 100.\n";
        } while (n < 1 || n > 100);

        // Read marks
        readMarks(marks, n);

        // Show full report
        printReport(marks, n);

        // Ask if user wants to run again
        cout << "\nDo you want to analyse another set of marks? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "\nThank you! Program ended.\n";
    return 0;
}

// ----------------- Function Definitions -----------------

void readMarks(int marks[], int n) {
    cout << "\nEnter marks of " << n << " students:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << (i + 1) << ": ";
        cin >> marks[i];
    }
}

int findTotal(int marks[], int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        total += marks[i];
    }
    return total;
}

double findAverage(int marks[], int n) {
    // Important: cast to double so we get decimal average
    return (double)findTotal(marks, n) / n;
}

int findHighest(int marks[], int n) {
    int highest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] > highest)
            highest = marks[i];
    }
    return highest;
}

int findLowest(int marks[], int n) {
    int lowest = marks[0];
    for (int i = 1; i < n; i++) {
        if (marks[i] < lowest)
            lowest = marks[i];
    }
    return lowest;
}

int countPassed(int marks[], int n) {
    int passed = 0;
    for (int i = 0; i < n; i++) {
        if (marks[i] >= 40)          // pass mark = 40
            passed++;
    }
    return passed;
}

void printReport(int marks[], int n) {
    int total   = findTotal(marks, n);
    double avg  = findAverage(marks, n);
    int high    = findHighest(marks, n);
    int low     = findLowest(marks, n);
    int passed  = countPassed(marks, n);
    int failed  = n - passed;

    cout << "\n========== STUDENT MARKS REPORT ==========\n";
    cout << "Number of students : " << n << endl;
    cout << "Total marks        : " << total << endl;
    cout << "Average marks      : " << avg << endl;
    cout << "Highest mark       : " << high << endl;
    cout << "Lowest mark        : " << low << endl;
    cout << "Passed             : " << passed << endl;
    cout << "Failed             : " << failed << endl;
    cout << "==========================================\n";
}