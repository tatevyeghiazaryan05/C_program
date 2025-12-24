#include <iostream>
#include <set>
#include <unordered_set>

int main () {
    //1
    std::set<int> s;

    s.insert (3);
    s.insert (1);
    s.insert (2);
    s.insert (2); //ignor

    std::cout << "1) std::set (ordered, unique):\n";
    for (int x : s)
        std::cout << x << " "; //1 2 3
    std::cout << "\n\n";
        
    //2
    std::unordered_set<int> us;

    us.insert(3);
    us.insert(1);
    us.insert(2);
    us.insert(2); //ignor

    std::cout << "2) std::unordered_set (hash-based):\n";
    for (int x : us) 
        std::cout << x << " "; //2 1 3
    std::cout << "\n\n";
    
    //3
    std::multiset<int> ms;

    ms.insert(3);
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);

    std::cout << "3) std::multiset (ordered, duplicates allowed):\n";
    for (int x : ms) 
        std::cout << x << " "; //1 2 2 3
    std::cout << "\n\n";
    
    //4
    std::unordered_multiset<int> ums;

    ums.insert(3);
    ums.insert(1);
    ums.insert(2);
    ums.insert(2);

    std::cout << "4) std::unordered_multiset (hash + duplicates):\n";
    for (int x : ums) 
        std::cout << x << " "; //2 2 1 3
    std::cout << "\n\n";
       
    return 0;
}
