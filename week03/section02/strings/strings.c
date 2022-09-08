#include <stdio.h>
#include "passwords.h"

int main(int argc, char *argv[]) {
    for (int i = 0; i < 3; i++) {
        char *pswd = passwords[i];
        printf("password[%d] = %s\n", i, pswd);
    }
    return 0;
}
