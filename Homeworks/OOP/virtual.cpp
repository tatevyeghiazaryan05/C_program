// #include <iostream>
// using namespace std;
//
// class Base {
// public:
//     Base () {}
//     virtual ~Base () {}
//     virtual void foo (int t = 8) {
//         cout << "t = " << t << "\n";
//     }
// };
//
// class Derived1 : public Base {
// public:
//     Derived1 () : Base () {}
//     virtual void foo (int t = 100) {
//         cout << "t = " << t << "\n";
//     }
// };
//
// class Derived2 : public Base {
// public:
//     void foo (int t = 100) override {
//         cout << "t = " << t << "\n";
//     }
// };
//
// int main () {
//     Base* ptr1 = new Derived1 ();
//     ptr1 -> foo (); //8
//     /* Հասկանանք ինչու ա տպում 8? Որովհետև արգումենտի default value-ն որոշվումա ոչ թե ցուցչի այլ օբյեկտի տիպով։ */
//
//     //վտանգավոր
//     Base* b = new Derived1 ();
//     ((Derived1*) b) -> foo (); //100
//
//     return 0;
// }

/* Ոնց անենք որ առանց վիրտուալ գրելու, տպի ժառանգինը */
#include <iostream>
using namespace std;

class Base {
public:
    //ptr
    /* ոնց որ ձեռքով հավաքենք virtual table */
    void (*func) (Base*, int);

    Base () {
        func = Base::impl;
    }

    static void impl (Base* self, int x) {
        cout << "Base: " << x << "\n";
    }

    void foo (int x = 20) {
        func (this, x);
    }
};

class Derived : public Base {
public:
    Derived () {
        func = Derived::impl;
    }

    static void impl (Base* self, int x) {
        cout << "Derived: " << x << "\n";
    }

    void foo (int x = 100) {
        func (this, x);
    }
};

int main () {
    Base* ptr_base = new Derived ();
    ptr_base -> foo ();   //20

    Derived ptr_derived;
    ptr_derived.foo ();    //100
}