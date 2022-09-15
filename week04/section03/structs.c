#include <stdio.h>

struct numbers {
    int i;
    int j;
};

// add1 takes a pointer to a numbers struct (*)
void add1(struct numbers *pn) {
    // the "points to" operator -> dereferences the pn pointer
    pn->i = pn->i + 1;
    pn->j = pn->j + 1;
}

int main(int argc, char *argv[]) {
    // n is an instance of the numbers struct
    struct numbers n; 
    n.i = 0;
    n.j = 1;

    printf("n.i: %d\nn.j: %d\n", n.i, n.j);

    // pass the memory address of n to add1
    add1(&n);

    printf("n.i: %d\nn.j: %d\n", n.i, n.j);

    return 0;
}
