#include <stdio.h>

int main(int argc, char *argv[]) {
    for (int i = 0; i < argc; i++) {
        /* printf() is a "variadic" function, taking a format string
            and a list of parameters. %d and %s are "format specifiers"
            which are parsed by printf() and matched with the type 
            of the parameters
        */
        printf("argv[%d] = %s\n", i, argv[i]);
    }
    return -1;
}
