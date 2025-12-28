#include <iostream>
#include <algorithm>
#include <vector>

struct cmp {
    bool operator () (int a, int b) const {
        return a < b;
    }
};

int main () {
    std::vector<int> v = {3, 1, 2};

    std::sort (v.begin (), v.end (), cmp {});

    for (int x : v)
        std::cout << x << " "; //1 2 3
}