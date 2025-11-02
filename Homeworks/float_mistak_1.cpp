#include <iostream>
#include <limits>

int main() {
    float x = 1.0f;
    while (x + 1.0f != x) {
        x *= 2.0f; 
    }

    std::cout << x << std::endl;   
    
    int degree = 0;
    
    while(x > 1){
        x /= 2;
        degree++;
    }
    
    std::cout << degree << "\n";
    
    return 0;
}
