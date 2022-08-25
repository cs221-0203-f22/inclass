#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int i = 0;

    while (i < argc) {
        /* printf() is a "variadic" function, taking a format string
            and a list of parameters. %d and %s are "format specifiers"
            which are parsed by printf() and matched with the type 
            of the parameters
        */
        printf("len of argv[%d] = %ld\n", i, strlen(argv[i]));
        i++;
    }
    return -1;
}
