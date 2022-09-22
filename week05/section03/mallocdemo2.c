#include <stdlib.h>
#include <stdio.h>

struct foo {
    int i;
    int j;
};

struct foo *make_foo() {

    /* bug! temp is short-lived. destroyed when "if" block finishes
    if (x == 1) {
        struct foo temp;
        temp.i = 0;
        return &temp;
    }
    */

    // Allocate a long-lived block on the heap
    struct foo *f = malloc(sizeof(struct foo));
    if (!f) {
        printf("failed to malloc(struct foo)\n");
        exit(-1); // return from program now
    }

    return f;  // return a pointer to heap block
}

int main(int argc, char *argv[]) {
    struct foo *pf = make_foo();
    pf->j = 1;
    
    free(pf);

    return 0;
}
