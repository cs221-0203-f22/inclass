#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *haystack = argv[1];
    char *needle = argv[2];

    int count = 0;

    // loop until haystack reaches null terminator
    while (*haystack != '\0') {
        char *match = strstr(haystack, needle);
        if (match) {
            count += 1;  // count++ is equiv
            printf("match = %s\n", match);
        }
    }
    return 0;
}
