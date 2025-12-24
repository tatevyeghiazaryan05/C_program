/* Raw Pointer-ը զուտ հիշողություն ա հատկացնում Heap-ում։ Իսկ տեղ ազատելը ձեռքով պիտի անենք, որ
memory leak չլինի
*/

#include <iostream>

int main () {

    int* p = new int (5); //Raw Ptr
    std::cout << *p << std::endl; //5

    delete p;

    return 0;
}