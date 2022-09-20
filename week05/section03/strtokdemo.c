#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *s = argv[1];

    char *token = strtok(s, " ");

    while (token) {
        printf("token: %s\n", token);
        token = strtok(NULL, " ");
    }
}
