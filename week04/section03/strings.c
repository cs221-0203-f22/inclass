#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("argv[1]: \"%s\"\n", argv[1]);

    // atoi returns the integer value of a character string
    int i = atoi(argv[1]);
    printf("i: %d\n", i);

    return 0;    
}
