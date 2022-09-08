#include <stdio.h>

void l33t(char *s) {
    while (*s != '\0') {
        // dereference s to get the char it points to
        char ch = *s;
        if (ch == 'o')
            ch = '0';
        else if (ch == 'a')
            ch = '@';
        *s = ch;  // puts back the substituted char in the string
        
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
