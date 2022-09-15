#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    printf("argv[1] = \"%s\"\n", argv[1]);
    char *intstr = argv[1];
    int i = atoi(intstr);
    printf("i = %d\n", i);

    return 0;
}
