// #include <iostream>
// #include <string>
//
// class Person {
// private:
//     std::string name;
//     int age;
//
//     //Private method, որն օգտագործողին հասանելի չի
//     bool isShortString () const {
//         return name.size () < 5;
//     }
//
// public:
//     //Constructor
//     Person (const std::string& m_name, int m_age) {
//         this -> name = m_name;
//         this -> age = m_age;
//         std::cout << "Hello From Constructor!" << "\n";
//     }
//
//     //Destructor
//     ~Person () {
//         std::cout << "Hello From Destructor!" << "\n";
//     }
//
//     //Public method, որն օգտագործողին հասանելի է
//     void introduce () const {
//         std::cout << "Hi, my name is " << name << " and I am " << age << " years old." << "\n";
//
//         if (isShortString ())
//             std::cout << "My name is short!" << "\n";
//         else
//             std::cout << "My name is not short." << "\n";
//     }
// };
//
// int main () {
//     Person p ("Ghaya", 20);
//     p.introduce ();
//
//     return 0;
// }
//
// #include <iostream>
//
// class A {
//     public:
//         A () {
//             std::cout << "Hello from Constructor 1!\n";
//         }
//         ~A () {
//             std::cout << "Hello from Destructor 1!\n";
//         }
// };
//
// class B {
//     public:
//         B () {
//             std::cout << "Hello from Constructor 2!\n";
//         }
//         ~B () {
//             std::cout << "Hello from Destructor 2!\n";
//         }
// };
//
// int main () {
//     A a;
//     B b;
//
//     return 0;
// }
//
// /*
// Hello from Constructor 1!
// Hello from Constructor 2!
// Hello from Destructor 2!
// Hello from Destructor 1!
// */
//
// #include <iostream>
//
// class Int {
// public:
//     int value;
//
//     //Default Constructor
//     Int () {
//         std::cout << "Hello From Default Constructor! Value = Garbage\n";
//     }
//
//     //Parameterized Constructor
//     Int (int val) {
//         value = val;
//         std::cout << "Hello From Parameterized Constructor! Value = " << val << "\n";
//     }
//
//     //Copy Constructor
//     Int (const Int& other) {
//         value = other.value;
//         std::cout << "Hello From Copy Constructor! Value = " << other.value << "\n";
//     }
// };
//
// int main () {
//     Int a; //Default Constructor
//     Int b (5); //Parameterized Constructor
//     Int c = b; //Copy Constructor
//
//     return 0;
// }
//
// #include <iostream>
// #include <list>
// using namespace std;
//
// class YouTubeChannel {
// private:
//  string Name;
//  int SubscribersCount;
//  list<string> PublishedVideoTitles;
// protected:
//  string OwnerName;
//     int ContentQuality;
// public:
//  YouTubeChannel (string name, string ownerName) {
//   Name = name;
//   OwnerName = ownerName;
//   SubscribersCount = 0;
//   ContentQuality = 0;
//  }
//  void GetInfo () {
//   cout << "Name: " << Name << "\n";
//   cout << "Owner Name: " << OwnerName << "\n";
//   cout << "Subscribers Count: " << SubscribersCount << "\n";
//   cout << "Videos: " << "\n";
//   for (string videoTitle : PublishedVideoTitles) {
//    cout << videoTitle << "\n";
//   }
//  }
//  void Subscribe () {
//   SubscribersCount ++;
//  }
//  void Unsubscribe () {
//   if (SubscribersCount > 0)
//    SubscribersCount --;
//  }
//  void PublishVideo (string title) {
//   PublishedVideoTitles.push_back (title);
//  }
//     void CheckAnalytics () {
//         if (ContentQuality < 5)
//             cout << Name << " has a bad quality content." << "\n";
//         else
//             cout << Name << " has a good content." << "\n";
//     }
// };
//
// class CookingYouTubeChannel : public YouTubeChannel {
// public:
//  CookingYouTubeChannel( string name, string ownerName) : YouTubeChannel (name, ownerName) {
//
//  }
//  void Practice () {
//   cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << "\n";
//         ContentQuality ++;
//  }
// };
//
// class SingersYouTubeChannel : public YouTubeChannel {
// public:
//  SingersYouTubeChannel( string name, string ownerName) : YouTubeChannel (name, ownerName) {
//
//  }
//  void Practice () {
//   cout << OwnerName << " is taking singing classes, learning new songs, learning how to dance..." << "\n";
//         ContentQuality ++;
//  }
// };
//
// int main () {
//  CookingYouTubeChannel cookingYouTubeChannel ("Amy's Kitchen", "Amy");
//  SingersYouTubeChannel singersYouTubeChannel ("JohnSings", "John");
//
//     cookingYouTubeChannel.Practice ();
//     singersYouTubeChannel.Practice ();
//     singersYouTubeChannel.Practice ();
//     singersYouTubeChannel.Practice ();
//     singersYouTubeChannel.Practice ();
//     singersYouTubeChannel.Practice ();
//     singersYouTubeChannel.Practice ();
//     singersYouTubeChannel.Practice ();
//
//     YouTubeChannel * yt1 = &cookingYouTubeChannel;
//     YouTubeChannel * yt2 = &singersYouTubeChannel;
//
//     yt1 -> CheckAnalytics ();
//     yt2 -> CheckAnalytics ();
//
//  return 0;
// }

/* Սահմանել դաս,որի պաշտպանված անդամներն են 1. Կառուցվածք տիպի զանգվածի ցուցիչը/ կառուցվածքի դաշտերն են
ա/ ազգանուն, բ/ թոշակ գ/ ստաժ / 2. այդ զանգվածի տարրերի քանակը:Այս դասի համար սահմանել բաց ժառանգ դաս,
որի բաց ֆունկցիաներից մեկը ստանում և արտածում է տրված թվից շատ թոշակ ստացողների  ցուցակը:Պահանջվում է
ժառանգ դասի օբյեկտի միջոցով  արտածել տրված թվից շատ թոշակ ստացողների  ցուցակը: */
#include <iostream>
#include <cstring>

struct Person {
    char surname[20];
    int scholarship;
    int experience;
};

class C {
    protected:
        Person *x;
        int n;
    public:
        C (Person *x1, int n1) {
            x = x1;
            n = n1;
        }
        ~C () {}
};

class C_Jarang: public C {
    public:
        C_Jarang (Person *x2, int n2) : C (x2, n2) {}

        ~C_Jarang () {}

        void f (int num) {
            size_t count = 0;
            Person y[20];
            std::cout << "People whose scholarship is higher than number are: \n";

            for (size_t i = 0; i < n; ++ i)
                if (x[i].scholarship > num) {
                    strcpy (y[count].surname, x[i].surname);
                    y[count].scholarship = x[i].scholarship;
                    y[count].experience = x[i].experience;
                    count ++;
                }

            if (count == 0)
                std::cout << "There is not person whose scholarship is higher than number." << "\n";
            else
                for (size_t i = 0; i < count; ++ i)
                    std::cout << y[i].surname << " - " << y[i].scholarship << " - " << y[i].experience << "\n";
        }
};

int main () {
    size_t count, number;
    Person arr[20];

    do {
        std::cout << "Number = ";
        std::cin >> number;
    } while (number < 0);

    do {
        std::cout << "Count = ";
        std::cin >> count;
    } while (count < 2 || count > 20);

    std::cout << "Input surname, scholarship, experience: " << "\n";
    for (size_t i = 0; i < count; ++ i)
        std::cin >> arr[i].surname >> arr[i].scholarship >> arr[i].experience;

    C_Jarang ob (arr, count);
    ob.f (number);

    return 0;
}

/* Output
Number = 7000
Count = 3
Input surname, scholarship, experience:
A 5000 3
B 10000 8
C 20000 4
People whose scholarship is higher than number are:
B - 10000 - 8
C - 20000 - 4
*/

