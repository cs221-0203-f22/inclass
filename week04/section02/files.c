#include <stdio.h>
#include <string.h>

/* takes a filename in argv[1] and file contents in 
    argv[2] and writes the contents to a file
 */
int main(int argc, char *argv[]) {
    char *path = argv[1];
    char *content = argv[2];
    char *mode = "w";

    FILE *f = fopen(path, mode);
    if (!f) {
        printf("failed to open %s\n", path);
        return -1;
    }

    size_t len = strlen(content) + 1; // for null terminator
    size_t nwritten = fwrite(content, sizeof(char), len, f);
    if (nwritten != len) {
        printf("fwrite wrote %ld, expected %ld\n", nwritten, len);
        return -1;
    }

    int err = fclose(f);
    if (err) {
        printf("failed to close %s\n", path);
        return -1;
    }

    return 0;
}
