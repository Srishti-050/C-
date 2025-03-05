#include <iostream>
#include <climits> // For INT_MIN and INT_MAX
using namespace std;

const int MAX_STUDENTS = 100; // Maximum number of students
int marks[MAX_STUDENTS];      // Array to store marks
int numStudents = 0;          // Current number of students

// Function prototypes
int enterMarks(int n);
int calculateAverage();
int findHighestAndLowest();
void displayMenu();

int main() {
    int choice, n;

    while (true) {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the number of students: ";
                cin >> n;
                if (enterMarks(n)) {
                    cout << "Marks entered successfully.\n";
                } else {
                    cout << "Invalid number of students.\n";
                }
                break;
            case 2:
                if (calculateAverage()) {
                    // Average calculated and displayed successfully
                } else {
                    cout << "No marks entered yet.\n";
                }
                break;
            case 3:
                if (findHighestAndLowest()) {
                    // Highest and lowest marks displayed successfully
                } else {
                    cout << "No marks entered yet.\n";
                }
                break;
            case 4:
                cout << "Exiting the program.\n";
                return 0;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    }

    return 0;
}

// Function to display the menu
void displayMenu() {
    cout << "\nMenu:\n";
    cout << "1. Enter marks of N students\n";
    cout << "2. Calculate the average marks of the class\n";
    cout << "3. Find the highest and lowest marks\n";
    cout << "4. Exit\n";
}

// Function to enter marks of N students
int enterMarks(int n) {
    if (n <= 0 || n > MAX_STUDENTS) {
        return 0; // Failure (invalid number of students)
    }

    numStudents = n;
    cout << "Enter marks for " << n << " students:\n";
    for (int i = 0; i < n; i++) {
        cout << "Student " << i + 1 << ": ";
        cin >> marks[i];
    }
    return 1; // Success
}

// Function to calculate the average marks of the class
int calculateAverage() {
    if (numStudents == 0) {
        return 0; // Failure (no marks entered)
    }

    int sum = 0;
    for (int i = 0; i < numStudents; i++) {
        sum += marks[i];
    }
    double average = static_cast<double>(sum) / numStudents;
    cout << "Average marks of the class: " << average << endl;
    return 1; // Success
}

// Function to find the highest and lowest marks
int findHighestAndLowest() {
    if (numStudents == 0) {
        return 0; // Failure (no marks entered)
    }

    int highest = INT_MIN;
    int lowest = INT_MAX;

    for (int i = 0; i < numStudents; i++) {
        if (marks[i] > highest) {
            highest = marks[i];
        }
        if (marks[i] < lowest) {
            lowest = marks[i];
        }
    }

    cout << "Highest marks: " << highest << endl;
    cout << "Lowest marks: " << lowest << endl;
    return 1; // Success
}
