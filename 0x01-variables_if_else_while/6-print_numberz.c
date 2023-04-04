#include <stdio.h>

int main() {
    int i;
    char c;

    for (i = 0; i < 10; i++) {
        c = i + '0'; // convert integer to character
        putchar(c);
    }
    putchar('\n');

    return 0;
}





























