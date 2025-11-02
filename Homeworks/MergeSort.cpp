#include <iostream>
#include <vector>
#include <climits> 

void merge(std::vector<int> &A, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;
    
    std::vector<int> L(n1 + 1);
    std::vector<int> R(n2 + 1);
    
  
    for (int i = 0; i < n1; ++i)
        L[i] = A[p + i];
    for (int j = 0; j < n2; ++j)
        R[j] = A[q + 1 + j];
    
    L[n1] = INT_MAX;
    R[n2] = INT_MAX;
    
    int i = 0, j = 0;
    for (size_t k = p; k <= r; ++k) {
        if (L[i] <= R[j])
            A[k] = L[i++];
        else
            A[k] = R[j++];
    }
}

void merge_sort(std::vector<int> &A, int p, int r) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(A, p, q);
        merge_sort(A, q + 1, r);
        merge(A, p, q, r);
    }
}

int main() {
    std::vector<int> arr = {5, 2, 4, 6, 1, 3};
    
    merge_sort(arr, 0, arr.size() - 1);
    
    std::cout << "Sorted array: ";
    for (size_t i = 0; i < arr.size(); ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    
    return 0;
}
