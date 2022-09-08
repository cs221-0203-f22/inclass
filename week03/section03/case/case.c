#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *s = argv[1];
    for (size_t i = 0; i < strlen(s); i++) {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z')
            printf("%c is lower case\n", ch);
        else if (ch >= 'A' && ch < 'Z')
            printf("%c is upper case\n", ch);
        else
            printf("%c is not upper or lower case\n", ch);
    }
    return 0;
}
