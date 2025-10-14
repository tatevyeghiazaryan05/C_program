#include <iostream>
int main ()
{
    int arr [] = {0, 2, 3, 8, 7, 7, 1, 1, 0, 8, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = 0;
    for (int i = 0; i < n; i ++)
        result ^= arr[i];
    std::cout << "Single number is: " << result << std::endl;
    return 0;
}