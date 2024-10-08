
// Implementation of linear search on an array

#include <iostream>

using namespace std;

int search(int arr[], int N, int x);

int main(void) {
    int arr[] = {2, 3, 4, 10, 40};
    int x = 10;
    int N = sizeof(arr) / sizeof(arr[0]);

    // Function call
    int result = search(arr, N, x);
    (result == -1)
    ? cout << "Element is not present in the array"
    : cout << "Element is present at the index " << result;
    return 0;
}

int search(int arr[], int N, int x) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == x)
            return i;
    }
    return -1;
}