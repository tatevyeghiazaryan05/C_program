#include <iostream>
#include <vector>
#include <string>

// Սա իջեցնում է արագագործությունը
#pragma pack (1) //Որ alignment չանի, էն 4 բայթը դատարկ չմնա

class B {
private:
    int i; //4 bytes
    std::vector <int> v; //24 bytes
    std::string s; //32 bytes

public:
    B () {}
    ~B () {}
};

#pragma pack () //Հետ ենք բերում ստանդարտ alignment-ը

int main () {
    std::cout << "Size of class B = " << sizeof (B) << " bytes" << std::endl; //60 bytes

    return 0;
}