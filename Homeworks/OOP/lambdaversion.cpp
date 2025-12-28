#include <iostream>
#include <algorithm>
#include <vector>

int main () {
    std::vector<int> v = {3, 1, 2};

    auto cmp = [] (int a, int b) {
        return a < b;
    };

    std::sort (v.begin (), v.end (), cmp);

    for (int x : v)
        std::cout << x << " "; //1 2 3
}