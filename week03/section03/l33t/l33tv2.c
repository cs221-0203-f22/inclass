#include <stdio.h>

void l33t(char *s) {
    while (*s != '\0') {
        // dereference s to get the char it points to
        char ch = *s;
        switch (ch) {
            case 'o':
                *s = '0';
                break;
            case 'a':
                *s = '@';
                break;
            default:
                ; // no substitution, do nothing
        }
        
        // move s to the next char
        s++;
    }
}

int main(int argc, char *argv[]) {
    char *s = argv[1];

    l33t(s);
    
    printf("%s\n", s);
    return 0;
}
