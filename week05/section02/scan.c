#include <stdio.h>
#include <string.h>

// Defines a struct foo, which contains a char array and and int
struct foo {
    char name[32];
    int qty;
};

int main(int argc, char *argv[]) {
    char *s = argv[1]; // s is a space-delimited string

    struct foo f; // f defines an instance of struct foo
    int buf_len = 0;
    while (*s != ' ') {
        f.name[buf_len] = *s;  // copy chars
        buf_len++;
        s++;  // s = s + 1
    }

    f.name[buf_len] = '\0'; // null-terminate the string
    printf("buf: %s\n", f.name);
}
