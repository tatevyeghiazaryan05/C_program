#include <iostream>
#include <vector>
#include <algorithm>

int main () {
    std::vector<int> v = {5, 2, 3, 8, 1, 4, 7, 6};

    sort (v.begin (), v.end (), [] (int a, int b) {
        if (a % 2 == 0 && b % 2 == 0) return a < b;
        if (a % 2 != 0 && b % 2 != 0) return a > b;
        return (a % 2 == 0);
    });

    for (int x : v) 
        std::cout << x << " ";
    std::cout << std::endl;
    
    return 0;
}