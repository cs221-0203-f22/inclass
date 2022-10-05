#include <stdio.h>
#include <stdlib.h>

int fact_rec(int n) {
    // base case: 1! or 0! is 1
    if (n <= 1) 
        return 1;

    // recursive: this elem * fact(elems on right)
    return n * fact_rec(n - 1);    
}

int main(int argc, char **argv) {
    int n = atoi(argv[1]);

    int f = fact_rec(n);
    
    printf("%d\n", f);
}
