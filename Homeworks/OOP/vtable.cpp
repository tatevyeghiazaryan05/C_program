#include <iostream>

struct VTable {
    int (*increment) (void* self, int);
};

struct Base {
    VTable* vptr;
};

int base_increment (Base* obj, int x) {
    return obj -> vptr -> increment (obj, x);
}

struct Derived {
    Base base;
    int value;
};

int derived_increment (void* self, int x) {
    Derived* d = static_cast<Derived*> (self);
    return x + 1 + d -> value;
}

VTable derived_vtable = {
    derived_increment
};

void Derived_init (Derived* d, int value) {
    d -> base.vptr = &derived_vtable;
    d -> value = value;
}

int main () {
    Derived d;
    Derived_init (&d, 5);

    Base* b = reinterpret_cast<Base*> (&d);

    std::cout << base_increment (b, 10) << std::endl; //16

    return 0;
}