#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *s = argv[1];

    FILE *f = fopen("test.txt", "w");
    if (!f) {
        printf("fopen failed\n");
        return -1;
    }

    size_t len = strlen(s) + 1;
    size_t nwritten = fwrite(s, sizeof(char), len, f);
    if (nwritten != len) {
        printf("wrote %ld expected %ld\n", nwritten, len);
        return -1;
    }

    fclose(f);

    return 0;
}
