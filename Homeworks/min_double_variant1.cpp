#include <iostream>
#include <limits>


int main()
{
    double x = std::numeric_limits<double>::min();
    double k = std::numeric_limits<double>::denorm_min();
    
    std::cout << x <<"\n";
    std::cout << k <<"\n";
    
    return 0;
}
