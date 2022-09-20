#include <stdio.h>
#include <string.h>

struct mystruct {
    char astring[32];
    int anint;
};

int main(int argc, char *argv[]) {
    struct mystruct s;
    strcpy(s.astring, "foobar");
    s.anint = 9;

    char str_to_write[32];
    sprintf(str_to_write, "%s,%d\n", s.astring, s.anint);

    printf("str_to_write: %s", str_to_write);
    return 0;
}
