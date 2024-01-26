#include <stdio.h>

int rolldice() {
    srdnd(500);
    return rand() % 6 + rand() % 6 + 2;
}
