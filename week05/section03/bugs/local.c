#include <stdio.h>
#include <string.h>

char* foo() {
    char s[32]; // allocated on the stack
    strcpy(s, "foobar"); // store memory on the stack
    return s; // when the function exits, stack is deallocated
}

int main(int argc, char *argv[]) {
    char *t = foo(); // t is garbage because s was destroyed when foo exited

    char *p;  // p is a pointer to chars, but is uninitialized
    strcpy(p, "foobar"); // writes to uninitialized space, crashes


    // to fix:
    char *p = malloc(32);
    if (p) {
        strcpy(p, "foobar"); // writes to uninitialized space, crashes
    }
}
