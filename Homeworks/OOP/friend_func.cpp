/* Friend-ը ստանում ա доступ տվյալ class-ի private և protected մեթոդներին։ Class-ը կարա ունենա մի քանի
friend ֆունկցիաներ։ Բայց պետք է այն շատ ու անկապ չընտրել, որովհետև կարա հանգեցնի ինկապսուլացիայի խանգարմանը,
որովհետև ոնց որ էդ դեպքում արդեն մեր class-ի private-ը private չլինի, ինքը դառնում ա կախված այլ ֆունկցիաներից։ */

#include <iostream>
using namespace std;

class EquilateralTriangle {
private:
    float a;
    float circumference;
    float area;
public:
    void setA (float length) {
        a = length;
        circumference = 3 * a;
        area = (1.73 * a * a) / 4;
    }

    friend void PrintResults (EquilateralTriangle);
};

void PrintResults (EquilateralTriangle obj) {
    cout << "Circumference = " << obj.circumference << "\n";
    cout << "Area = " << obj.area << "\n";
}

int main () {
    EquilateralTriangle object;
    object.setA (3);

    // cout << "Circumference = " << object.circumference << "\n"; //չի թողնի, կասի private ա
    // cout << "Area = " << object.area << "\n"; //չի թողնի, կասի private ա

    /* Ենթադրենք, մենք ենք հնարել այս բանաձևերը ու ուզում ենք, որ գաղտնի մնան, բայց հասանելի
    լինեն մեր ընկերական շրջապատում։ Հենց այս դեպքում ենք օգտագործում friend ֆունկցիան */

    PrintResults (object);

    return 0;
}