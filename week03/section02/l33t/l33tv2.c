#include <stdio.h>

void l33t(char *s) {

    // *s means "what s points to" (dereference)
    // C conditionals work on 0 and non-0
    // if or while - that's all they check
    while (*s) {
        switch (*s) {
            case 'o':
                *s = '0';
                break;
            case 'a':
                *s = '@';
                break;
        }
        s++;
    }
}

int main(int argc, char *argv[]) {
    char *s = argv[1];

    l33t(s);

    printf("%s\n", s);
}
