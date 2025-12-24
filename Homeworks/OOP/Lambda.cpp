#include <iostream>
using namespace std;

int main () {
    auto a = [] () { cout << "Hello from a!" << "\n"; };
    
    auto a2 = a;
    /* We can do like this and this is valid. It works like lambda, 
    so it is an object of anonymus class. Compiler makes something like this:
            struct __Lambda1 {
            void operator () () const { ... }
        };
        __Lambda1 a;
        __Lambda1 a2 = a;
        
        And, it's copy, not ref!!!
    */

    a ();
    a2 ();
    return 0;
}