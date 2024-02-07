#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key) {
    int start = 0;
    int end = size - 1;
    int mid = start + (end-start) / 2;

    while (start <= end) {
        if (arr[mid] == key) {
            return mid;
        }
        if (key > arr[mid]) {
            start = mid + 1;
        } else {
            end = mid - 1;  // Corrected this line
        }
        mid = start + (end-start) / 2;
    }

    return -1;
}

int main() {
    int even[6] = {2, 4, 6, 12, 24, 18};
    int odd[5] = {2, 4, 6, 12, 24};
    int evenIndex = binarySearch(even, 6, 21);
    int oddIndex = binarySearch(odd, 5, 12);
    cout << "21 is on index " << evenIndex << endl;
    cout << "12 is on index " << oddIndex << endl;

    return 0;  // Added return statement
}
