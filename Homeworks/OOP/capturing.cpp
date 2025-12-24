#include <iostream>
#include <vector>
#include <algorithm>

int main () {
    int x = 10;
    int y = 20;

    std::cout << "Capture by value [x]: ";
    auto lambda_val = [x] () { 
        std::cout << "x = " << x;
        // x++; //error
    };
    lambda_val ();
    std::cout << "\n\n";

    std::cout << "Capture by ref [&x]: ";
    auto lambda_ref = [&x] () {
        x++;
        std::cout << "x = " << x;
    };
    lambda_ref ();
    std::cout << ", ";
    lambda_ref ();
    std::cout << "\n\n";

    std::cout << "Capture all by val [=]: ";
    auto lambda_all_val = [=] () {
        std::cout << "x = " << x << ", y = " << y;
        // x++; //error
    };
    lambda_all_val ();
    std::cout << "\n\n";

    std::cout << "Capture all by ref [&]: ";
    auto lambda_all_ref = [&] () {
        x++;
        y++;
        std::cout << "x = " << x << ", y = " << y;
    };
    lambda_all_ref ();
    std::cout << "\n\n";

    std::cout << "Mixed capture [&x, y]: ";
    auto lambda_mixed = [&x, y] () {
        x++;
        std::cout << "x = " << x << ", y = " << y;
        // y++; //error
    };
    lambda_mixed ();
    std::cout << "\n\n";

    std::cout << "Capture by val with mutable [x] mutable: \n";
    auto lambda_mutable = [x] () mutable {
        x += 100;
        std::cout << "  x inside lambda_mutable = " << x;
    };
    lambda_mutable ();
    std::cout << "\n";
    std::cout << "  x outside = " << x;
    std::cout << "\n\n";

    std::cout << "Capture with dangling ref (don't do this!!!): ";
    auto makeLambda = [] () {
        int z = 50;
        return [&z] () {
            std::cout << z << std::endl;
        };
    };
    // auto lambda_bad = makeLambda();
    // lambda_bad(); //UB

    return 0;
}