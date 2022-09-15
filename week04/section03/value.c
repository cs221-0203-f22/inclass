#include <stdio.h>

// i is passed by value
// modifications will not be reflected in caller
void add1(int i) {
    i = i + 1;
}

int main(int argc, char *argv[]) {
    int i = 0;
    printf("i: %d\n", i);
    
    add1(i);
    printf("i: %d\n", i);

    return 0;
}
