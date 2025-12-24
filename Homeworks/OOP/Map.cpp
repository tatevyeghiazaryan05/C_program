#include <iostream>
#include <map>
#include <unordered_map>

int main () {
    //1
    std::map<int, std::string> m;

    m[3] = "three";
    m[1] = "one";
    m[2] = "two";

    std::cout << "1) std::map (ordered):\n";
    for (const auto& [key, value] : m) 
        std::cout << key << " -> " << value << "\n"; //1 2 3
    std::cout << "\n";
    
    //2
    std::unordered_map<int, std::string> um;

    um[3] = "three";
    um[1] = "one";
    um[2] = "two";

    std::cout << "2) std::unordered_map (hash table):\n";
    for (const auto& [key, value] : um) 
        std::cout << key << " -> " << value << "\n"; //2 1 3
    std::cout << "\n";
    
    //3
    std::multimap<int, std::string> mm;

    mm.insert({1, "Math"});
    mm.insert({1, "Physics"});
    mm.insert({2, "Programming"});

    std::cout << "3) std::multimap (duplicate keys allowed):\n";
    for (const auto& [key, value] : mm) 
        std::cout << key << " -> " << value << "\n"; /* Maths Physics Programming */
    std::cout << "\n";
    
    //4
    std::unordered_multimap<int, std::string> umm;

    umm.insert({1, "A"});
    umm.insert({1, "B"});
    umm.insert({2, "C"});

    std::cout << "std::unordered_multimap (hash + duplicates):\n";
    for (const auto& [key, value] : umm) 
        std::cout << key << " -> " << value << "\n"; //C B A
    std::cout << "\n";
    
    return 0;
}