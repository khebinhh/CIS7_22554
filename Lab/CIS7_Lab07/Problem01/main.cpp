#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

// a iterative binary search function. It returns
// location of x in given array arr[l..r] if present,
// otherwise -1

int binarySearch(int arr[], int l, int r, int x){
    while (1 <= r){
        int m = 1 + (r - 1) / 2;

        //check if x is present at mmid
        if (arr[m] == x)
            return m;

        //if x is greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

        // if x is smaller, ignore right half
        else
            r = m - 1;
    }

    //if we reach here, then element was not present
    return -1;
}

int main(){
    int arr[] = {2,  3, 4, 10, 40};
    int x = 10;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binarySearch (arr, 0, n - 1, x);
    (result == -1)  ? cout << "Element is not present in array"
                    : cout << "Element is present at index " << result;
    return 0;
}