#include <stdio.h>

/*
    main() function returns an int
    argc is the count of arguments from cmd line
    argv is an array ([]) of char* (char* is a C string)
*/
int main(int argc, char *argv[]) {
    for (int i = 0; i <= 1024; i++) {
        /* %d is a format specifier saying i is decimal
           %s is a format specifier saying s is a string
        */
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    /* 0 means program succeeded */
    return 0;
}
