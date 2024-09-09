#include <iostream>
#include <cstdlib>

using namespace std;

void bubbleSort(int* arr, int size) {
    bool swapped;
    for (int i = 0; i < size - 1; i++) {
        swapped = false;
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
            break;
    }
}

int binarySearch(int* arr, int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid; 
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1; // Return -1 if the element was not found
}

void printArray(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int size;

    cout << "Enter the number of elements: ";
    cin >> size;

    int* arr = new int[size];

    if (arr == nullptr) {
        cerr << "Memory allocation failed!" << endl;
        return 1; // Return 1 to indicate failure
    }

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bubbleSort(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    int key;
    cout << "Enter the element to search for: ";
    cin >> key;

    int index = binarySearch(arr, size, key);

    if (index != -1) {
        cout << "Element " << key << " found at index " << index << "." << endl;
    } else {
        cout << "Element " << key << " not found in the array." << endl;
    }

    delete[] arr;

    return 0;
}

