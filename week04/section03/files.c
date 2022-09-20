#include <stdio.h>
#include <string.h>

// this program takes a filename and contents in argv
// writes the contents out to the named file

int main(int argc, char *argv[]) {
    char *path = argv[1];
    char *mode = "w";

    FILE *f = fopen(path, mode);
    if (!f) {
        // check for failure
        printf("failed to open %s\n", path);
        return -1;
    }

    char *content = argv[2];
    size_t len = strlen(content);
    size_t nwritten = fwrite(content, sizeof(char), len, f);
    if (nwritten != len) {
        printf("failed to write %s\n", content);
        return -1;
    }

    int err = fclose(f);
    if (err) {
        printf("failed to close %s\n", path);
        return -1;
    }
}
