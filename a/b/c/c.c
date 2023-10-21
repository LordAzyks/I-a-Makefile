#include "c.h"

void c(int n){
    printf("Your input was %d, and the result is %d\n",n, b(n));
}

int main(int argc, char const *argv[]) {
    if (argc == 2) {
        c(atoi(argv[1]));
    }
    return 0;
}
