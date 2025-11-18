#include <iostream>
#include <chrono>

void foo()
{
    volatile int sum = 0;
    
    for(volatile int i = 0; i < 1000000; i++)
        sum += i + i/2;
        
    std::cout << sum << "\n";
    
}

int main()
{
   auto start = std::chrono::high_resolution_clock::now();
   
   foo();
   
   auto end = std::chrono::high_resolution_clock::now();

   std::chrono::duration<double> duration = end - start;  
    
   std::cout << duration.count() << std::endl;
    
    return 0;
}
