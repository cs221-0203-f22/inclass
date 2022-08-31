#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("invalid arguments\n");
        return -1;
    }

    char *s = argv[1]; /* s is the string to calc length */
    int i;

    /* every C string is terminated by a NULL, aka '\0' */
    for (i = 0; s[i] != '\0'; i++)
        ;

/* alternative way to do the same thing:
    while (s[i] != '\0') {
        i++;
    }
*/
    printf("%d\n", i);
}
