// #include <iostream>
// #include <string>
//
// int main() {
//     std::string a = "Hello";   // a → lvalue (ունի անուն)
//     std::string b = a;         // a-ն lvalue է
//
//     std::string c = a + "!!!"; // a + "!!!" → rvalue (ժամանակավոր օբյեկտ)
//
//     const std::string& ref = a + " world";
//     // Այստեղ նույնպես a + " world" → rvalue, բայց bindվում է const reference-ին
//
//     return 0;
// }
//
// #include <iostream>
//
// int i; //Global Variable
// // Gloval Variables Are By Default 0
//
// int foo (int val) {
//     while (i < 100) {
//         i += val;
//     }
//
//     return i;
// }
//
// int foo2 () {
//     i += 20;
//     return i;
// }
//
// int main () {
//     int value = 20;
//
//     std::cout << i << "\n"; //0 -> This is the by default value of global variables
//     std::cout << foo (value) << "\n"; //100
//     std::cout << foo2 () << std::endl; //120
//
//     return 0;
// }

#include <iostream>

int main () {
    int i1;
    std::cout << i1 << "\n"; //Garbage

    int i2 ();
    std::cout << i2 << "\n"; //Սա correct չի, որովհետև մենք էսպես կանչում ենք ֆունկցիա

    int i3 {};
    std::cout << i3 << "\n"; //0

    int i4 {2};
    std::cout << i4 << "\n"; //2

    int i5 (3);
    std::cout << i5 << "\n"; //3

    int i6 = 10;
    std::cout << i6 << "\n"; //10

    return 0;
}
