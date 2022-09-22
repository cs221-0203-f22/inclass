#include <stdio.h>
#include <stdlib.h>

struct foo {
    int i; 
    int j;
};

struct foo *make_foo() {
    // bug: f is allocated on the stack, which is short-lived
    // local vars are destroyed when block goes out of scope
    // struct foo f;
    // f.i = 0;
    // f.j = 1;
    // return &f;

    struct foo *pf = malloc(sizeof(struct foo));
    pf->i = 0;
    pf->j = 1;
    return pf;
}

int main(int argc, char *argv[]) {
    struct foo *pf = make_foo();
    pf->i = 3;
    free(pf);
}
