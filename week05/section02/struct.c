#include <stdio.h>
#include <string.h>

struct foo {
    char name[32];
    int qty;
};

int main(int argc, char *argv[]) {
    struct foo f;
    strncpy(f.name, "foobar", 32);
    f.qty = 2;

    char buf[128];
    snprintf(buf, 128, "%s,%d\n", f.name, f.qty);
    // fopen, fwrite, fclose 

    fprintf(f, "name,quantity\n")
}
