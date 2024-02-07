#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key) {
    int start = 0;
    int end = n - 1;
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    // If the key is not found, you may want to return -1 or some other indicator.
    return -1;
}

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int arrIndex = binarySearch(arr, 6, 4);

    if (arrIndex != -1) {
        cout << "Index of 4 is " << arrIndex << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
