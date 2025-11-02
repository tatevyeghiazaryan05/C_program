#include <iostream>
#include <limits>

int main(){
    
    double x = 1.0;
    
    while(x+1 != x){
        x *= 2;
    }
    
    std::cout << x << "\n";
    
    int degree = 0;
    
    while(x > 1){
        x /=2;
        degree++;
    }
    
    std::cout << degree << "\n";
    
    return 0;
    
}
