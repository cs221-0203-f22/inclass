#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    size_t i;
    char *s = argv[1];

    // index through string argument as an array
    for (i = 0; i < strlen(s); i++) {
        printf("%c\n", s[i]);
    }

    // index through string using pointer arithmetic
    while (*s != '\0') {
        printf("%c\n", *s);
        s = s + 1; // s += 1 OR s++ equiv
    }
}
