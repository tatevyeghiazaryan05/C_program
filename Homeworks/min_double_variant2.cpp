#include <iostream>


int main() {
    unsigned long long bits = 1;                  
    double x = *reinterpret_cast<double*>(&bits);

    std::cout << x << "\n"; 
    return 0;
}
