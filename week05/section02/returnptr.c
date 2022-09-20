#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *foo() {
#if 0
    char buf[32];
    strncpy(buf, "foobar", 32);
#endif
    char *buf = malloc(32); // allocates a 32 byte block of dynamic mem
    strncpy(buf, "foobar", 32);
    return buf;
}

int main() {
    char *pc = foo();
    printf("pc: %s\n", pc);
    free(pc); // no free -> "memory leak"
    return 0;
}
