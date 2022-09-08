#include <stdio.h>

int main(int argc, char *argv[]) {
    char *s = argv[1];

    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z')
            printf("%c is lower case\n", s[i]);
        else
            printf("%c is not lower case\n", s[i]);
    }
}
