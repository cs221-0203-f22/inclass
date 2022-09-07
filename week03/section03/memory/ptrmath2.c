#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *s = argv[1];

    // Index s as an array
    for (size_t i = 0; i < strlen(s); i++) {
        printf("%c\n", s[i]);
    }

    // Walk s forward one array element at a time
    while (*s != '\0') {
        printf("%c\n", *s);
        s += 1;
    }

    return 0;
}
