#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *haystack = "a very long string";

    // pointer arithmetic
    // start with an address, add a number to it
    char *fwd = haystack + strlen(argv[1]);

    printf("fwd = %s\n", fwd);
    return 0;
}
