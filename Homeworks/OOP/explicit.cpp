// #include <iostream>
// class B {
// public:
//     explicit B(int b){
//          std::cout << "Constructor called with "<< b<< std::endl;
//      }
// };
// void foo(B x) { }
//
//  int main() {
//      foo(5);
//      return 0;
//  }

// #include <iostream>
//
// class B {
// public:
//     explicit B(int b){
//         std::cout << "Constructor called with " << static_cast<int>(b) << std::endl;
//     }
// };
// void foo(B x) { }
//
// int main() {
//     foo(B(10));
//     return 0;
// }

// #include <iostream>
//
// class B {
// public:
//     explicit B(int b){
//         std::cout << "Constructor called with " << dynamic_cast<int>(b) << std::endl;
//     }
// };
// void foo(B x) { }
//
// int main() {
//     foo(B(5));
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

// class B {
// public:
//     explicit B(int b, float a){
//         std::cout << "Constructor called with :" << static_cast<int>(b) << " , "<< static_cast<float>(a) <<std::endl;
//     }
// };
//
// int main() {
//     B b {10,2.5};
//     return 0;
// }

#include <iostream>

//Explicit

class test {
private:
    int c;
public:
    explicit test(int a) {
        c = a;
    }
    int get() { //որպեսզի հասկանա ոնց տպի 5-ը, թե չէ չէր հասկանա test-
        return c;
    }

};
void func(test q) {
    std::cout << q.get() << std::endl;
}


int main()
{
    int k = 10;
    double m = k; // k-i arjeqy kveragrvi m-in u kdarna double
    std::cout << sizeof(m) << std::endl;
    //func(5); //implicit -> error
    //test t1 = 5; //implicit; -> error

    test t(5); //konkret arjeqov u tipov objekti stexcum
    func(t);
}