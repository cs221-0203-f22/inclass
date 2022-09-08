#include <stdio.h>

void l33t(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'a')
            s[i] = '@';
        else if (s[i] == 'o')
            s[i] = '0';
    }
}

int main(int argc, char *argv[]) {
    char *s = argv[1];

    l33t(s);

    printf("%s\n", s);
}
