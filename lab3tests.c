#include "types.h"
#include "user.h"

inline void recursiveTest(int n){
    if (n <= 1) {
        return;
    }
    recursiveTest(n-1);
    recursiveTest(n/2);
    recursiveTest(n/2);
}

inline void stackLocation(){
    printf(1, "TESTING - STACK LOCATION\n");
    int* p = malloc(2);
    int* o = 0;
    printf(1, "Heap pointer is currently at: %x\n", p);
    printf(1, "Stack pointer is currently at: %x\n", &o);
    return;
}

int main(){
    stackLocation();
    printf(1, "TESTING - STACK GROWS INWARDS USING RECURSiON\n");
    recursiveTest(200);
    printf(1, "Success!\n");
    return 0;
}