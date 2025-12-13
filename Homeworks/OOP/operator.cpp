#include <iostream>

class A {
public:
    int value;
    A(int v) : value(v){}

    operator int() const {
        return value;
    }
};

int main() {
     A a(50);
    std::cout << a << std::endl;
    return 0;
}
