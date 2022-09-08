#include <stdio.h>
#include <string.h>

/* This version uses s like an array rather than a ptr */
void l33t(char *s) {
    for (size_t i = 0; i < strlen(s); i++) {
        switch (s[i]) {
            case 'o':
                s[i] = '0';
                break;
            case 'a':
                s[i] = '@';
                break;
        }
    }
}

int main(int argc, char *argv[]) {
    char *s = argv[1];

    l33t(s);
    
    printf("%s\n", s);
    return 0;
}
