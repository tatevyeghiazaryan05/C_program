#include <stdio.h>
#include <alloca.h>

int main () {
    int n = 5;

    //Stack-ում տեղ ենք հատկացնում
    //Alloca-ն վերադարձնում է  void* 
    void* ptr = alloca (n * sizeof (char));

    //void*-ից սարքում ենք char* 
    char* str = (char*) ptr;

    for (size_t i = 0; i < n - 1; ++i) {
        str[i] = 'A' + i;
    }
    str[n - 1] = '\0';

    printf ("String From Alloca: %s", str);

    //Alloca-ի ժամանակ free պետք չի, հենց main-ը պրծնում ա, տեղն էլ ավտոմատ ազատվում ա

    return 0;
}