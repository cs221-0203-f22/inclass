#include <stdio.h>

int main(int argc, char *argv[]) {

                            // malloc() allocates dynamic memory
                            // which lives on the heap

    char *buf = malloc(32); // allocate 32 bytes on the heap
    strcpy(buf, "foobar");
    free(buf);              // deallocate dynamic memory
}
