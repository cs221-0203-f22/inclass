#include <stdio.h>

int main(int argc, char *argv[]) {
    char ch = 'a';
    char *pch = &ch;        // pch is the address of ch
    printf("pch = %p\n", pch);

    char ch2 = *pch;        // dereference pch to get the value at that addr
    printf("ch = %c\n", ch2);

    return 0;
}
