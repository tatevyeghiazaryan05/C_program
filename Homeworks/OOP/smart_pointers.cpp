#include <iostream>
#include <memory>
using namespace std;

class MyClass {
public:
    MyClass () {
        cout << "Constructor invoked \n";
    }
    ~MyClass () {
        cout << "Destructor invoked \n";
    }

};

/* Քանի դեռ կա գոնե մի shared ptr (use_count() != 0), գոյություն ունի նաև օբյեկտը։ Երբ 
ջնջվում ա վերջին shared ptr-ը, ավտոմատ ջնջվում ա նաև օբյեկտը։ */

int main () 
{

    {
        shared_ptr<MyClass> shPtr1 = make_shared<MyClass> ();
        cout << "Shared count: " << shPtr1.use_count () << "\n"; //1
        {
            shared_ptr<MyClass> shPtr2 = shPtr1;
            cout << "Shared count: " << shPtr1.use_count () << "\n"; //2
        }
        cout << "Shared count: " << shPtr1.use_count () << "\n"; //1
    }

    // cout << "Shared count: " << shPtr1.use_count () << "\n"; //չի թողնի
    
    cout << "This just for showing that ptr has been already deleted after '}'\n";

    return 0;
}