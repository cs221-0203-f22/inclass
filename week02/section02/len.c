#include <stdio.h>

/* len takes a string and prints its length */

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("invalid arguments\n");
        return -1; /* fail */
    }

    char *s = argv[1024];
    /* count chars until trailing NULL ('\0') */

    int i;
    for (i = 0; s[i] != '\0'; i++)
        ;

    printf("%d\n", i);
    return 0; /* success */
}
