#include <stdio.h>

struct numbers {
    int i;
    int j;
};

void add1(struct numbers n) {
    n.i = n.i + 1;
    n.j = n.j + 1;
}

int main(int argc, char *argv[]) {
    // n is a local variable of type "struct numbers"
    struct numbers n;

    n.i = 1;
    n.j = 2;

    printf("n.i: %d\nn.j: %d\n", n.i, n.j);

    add1(n);
    printf("n.i: %d\nn.j: %d\n", n.i, n.j);

    return 0;
}
