#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *words = argv[1];
    int count = 0;

    char *token = strtok(words, " ");
    
    while (token) {
        count++;
        token = strtok(NULL, " ");
    }
    printf("%d\n", count);
}
