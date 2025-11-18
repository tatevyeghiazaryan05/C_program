// #include <iostream>
// class B {
// public:
//     explicit B(int b){
//         std::cout << "Constructor called with "<< b<< std::endl;
//     }
// };
//
// int main() {
//     B b = 10;
//     return 0;
// }

// #include <iostream>

// class B {
// public:
//     explicit B(int b){
//         std::cout << "Constructor called with " << static_cast<int>(b) << std::endl;
//     }
// };
//
// int main() {
//     B b {10};
//     return 0;
// }

// #include <iostream>

// class B {
// public:
//     explicit B(int b){
//         std::cout << "Constructor called with " << dynamic_cast<int>(b) << std::endl;
//     }
// };
//
// int main() {
//     B b {10};
//     return 0;
// }

// #include <iostream>
//
// class B {
// public:
//     explicit B(int b, float a){
//         std::cout << "Constructor called with :" << static_cast<int>(b) << " , "<< static_cast<int>(a) <<std::endl;
//     }
// };
//
// int main() {
//     B b {10,2.5};
//     return 0;
// }
//

#include <iostream>

class B {
public:
    explicit B(int b, float a){
        std::cout << "Constructor called with :" << static_cast<int>(b) << " , "<< static_cast<float>(a) <<std::endl;
    }
};

int main() {
    B b {10,2.5};
    return 0;
}
