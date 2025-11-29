//     #include <iostream>
//
// struct alignas(4)MyStruct {
//     char a;
//     int b;
// };
//
// int main() {
//     std::cout << "Alignment of char: " << alignof(char) << std::endl;
//     std::cout << "Alignment of int: " << alignof(int) << std::endl;
//     std::cout << "Alignment of MyStruct: " << alignof(MyStruct) << std::endl;
//     std::cout << "Size of MyStruct: " << sizeof(MyStruct) << std::endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
//
// struct A {
//     char a;   // 1 byte
//     double b;    // 4 bytes
//     char c;   // 1 byte
// };
//
// int main() {
//     cout << "Size of struct A: " << sizeof(A) << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

#pragma pack(push, 1)   // Align members on 1-byte boundaries

struct B {
    char a;   // 1 byte
    double b;    // 4 bytes (no padding)
    char c;   // 1 byte
};

#pragma pack(pop)       // Restore default alignment

int main() {
    cout << "Size of struct B: " << sizeof(B) << endl;
    return 0;
}