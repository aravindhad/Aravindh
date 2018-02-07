#include <stdio.h>

int main() {
    int a = 65;
    int s = 120;
    printf(" value of i=%d k=%d before swapping", a, s);

    a = a ^ s;
    s = a ^ s;
    a = a ^ s;
    printf("value of i=%d k=%d after swapping", a, s);

    return 0;
}
