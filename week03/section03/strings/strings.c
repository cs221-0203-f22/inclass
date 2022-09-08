#include <stdio.h>
#include "passwords.h"

int main(int argc, char *argv[]) {
    for (int i = 0; i < 3; i++) {
        printf("passwords[%d] = %s\n", i, passwords[i]);
    }
}
