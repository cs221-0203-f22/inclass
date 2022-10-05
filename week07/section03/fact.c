#include <stdio.h>
#include <stdlib.h>

int fact(int n) {
    // base case: 1! is 1, 0! is 0
    if (n <= 1)
        return n;

    // recursive case: decompose n and go again
    return n * fact(n - 1);
}

int main(int argc, char **argv) {
    int n = atoi(argv[1]);

    int f = fact(n);
    printf("fact: %d\n", f);

    return 0;
}
