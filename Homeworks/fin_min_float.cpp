#include <iostream>


int main() {
    unsigned long long bits = 1;                  
    float x = *reinterpret_cast<float*>(&bits);

    std::cout << x << "\n"; 
    return 0;
}
