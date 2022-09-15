#include <stdio.h>

struct numbers {
    int i;
    int j;
};

// here, the numbers struct is passed by value
// so modifications won't be reflected in the caller
// in java, all struct params are passed by reference
void add1(struct numbers n) {
    n.i += 1;
    n.j += 1;
}

int main(int argc, char *argv[]) {
    struct numbers n;
    n.i = 0;
    n.j = 1;
    printf("n.i: %d\nn.j: %d\n", n.i, n.j);
    
    add1(n);
    printf("n.i: %d\nn.j: %d\n", n.i, n.j);
}
