#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int x) {
    int left = 0;           
    int right = n - 1;   

    while (left <= right) {  
        int mid = (left + right) / 2;   

        if (arr[mid] == x) 
            return mid; 
        else if (arr[mid] < x) 
            left = mid + 1;   
        else
            right = mid - 1; 
    }

    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);

    int x = 7; 
    int result = binarySearch(arr, n, x);

    if (result != -1) 
        cout << "The element's index: " << result << endl;
    else 
        cout << "The element haven't found" << endl;

    return 0;
}
