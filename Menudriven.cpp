#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void insertElement(vector<int>& arr, int element) {
    arr.push_back(element);
    cout << "Element inserted successfully.\n";
}

void deleteElement(vector<int>& arr, int element) {
    auto it = find(arr.begin(), arr.end(), element);
    if (it != arr.end()) {
        arr.erase(it);
        cout << "Element deleted successfully.\n";
    } else {
        cout << "Element not found in the array.\n";
    }
}

void searchElement(const vector<int>& arr, int element) {
    if (find(arr.begin(), arr.end(), element) != arr.end()) {
        cout << "Element found in the array.\n";
    } else {
        cout << "Element not found in the array.\n";
    }
}

void displayElements(const vector<int>& arr) {
    if (arr.empty()) {
        cout << "Array is empty.\n";
        return;
    }
    cout << "Array elements: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << "\n";
}

void sortArray(vector<int>& arr) {
    sort(arr.begin(), arr.end());
    cout << "Array sorted successfully.\n";
}

int main() {
    vector<int> arr;
    int choice, element;

    do {
        cout << "\nMenu:\n";
        cout << "a. Insert an element\n";
        cout << "b. Delete an element\n";
        cout << "c. Search for an element\n";
        cout << "d. Display all elements\n";
        cout << "e. Sort the array\n";
        cout << "f. Exit\n";
        cout << "Enter your choice: ";
        char ch;
        cin >> ch;

        switch (ch) {
            case 'a':
                cout << "Enter element to insert: ";
                cin >> element;
                insertElement(arr, element);
                break;
            case 'b':
                cout << "Enter element to delete: ";
                cin >> element;
                deleteElement(arr, element);
                break;
            case 'c':
                cout << "Enter element to search: ";
                cin >> element;
                searchElement(arr, element);
                break;
            case 'd':
                displayElements(arr);
                break;
            case 'e':
                sortArray(arr);
                break;
            case 'f':
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    } while (choice != 'f');
    
    return 0;
}
