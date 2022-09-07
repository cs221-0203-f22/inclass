#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char buf[32];

    // does not make a copy of the string
    // only copies the numeric value of the ptr
    char *s = argv[1]; 

    // copies the string into buf
    // unbounded memory copy
    strcpy(buf, argv[1]);

    // only copy data with a limit
    // else corrupted memory, security vulnerability
    strncpy(buf, argv[1], sizeof(buf) - 1);
}
