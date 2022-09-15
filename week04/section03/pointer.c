#include <stdio.h>

int main(int argc, char *argv[]) {
    int i = 0;
    printf("i: %d\n", i);
    
    // pi is a pointer to an int, whose value is the 
    // address of i
    int *pi = &i; 
    *pi = 2;
    
    printf("i: %d\n", i);

    return 0;
}
