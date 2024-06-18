// C++ code to linearly search x in arr[].

#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int x)
{
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

int search(int arr[], int N, int x)
{
    for (int i = 0; i < N; i++) {
        if (arr[i] > x) return -1;
        if (arr[i] == x) return i;
    }
    return -1;
}

// Driver code
int main(void)
{
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 2;
    int N = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Hello World!\n";
}