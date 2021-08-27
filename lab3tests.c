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

int main(){
    recursiveTest(200);
    return 0;
}