#include <iostream>
using namespace std;

void reverseArray(int* arr, int size) {
    int* left = arr;          // Pointer to the beginning of the array
    int* right = arr + size - 1; // Pointer to the end of the array
    
    while (left < right) {
        // Swap the values pointed by left and right
        int temp = *left;
        *left = *right;
        *right = temp;
        
        // Move pointers towards the center
        left++;
        right--;
    }
}

int main() {
    int N;
    
    // Accept the size of the array
    cout << "Enter the number of elements: ";
    cin >> N;
    
    int arr[N];
    
    // Accept N integers from the user
    cout << "Enter " << N << " elements: ";
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    
    // Display the original array
    cout << "Original array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Reverse the array using pointers
    reverseArray(arr, N);
    
    // Display the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}
