#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *haystack = argv[1];
    char *needle = argv[2];


    while (*haystack != '\0') {
        char *match = strstr(haystack, needle);
        printf("match = %s\n", match);
    }

    return 0;
}
