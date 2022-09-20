#include <stdio.h>
#include <string.h>

#define BUF_LEN 32

int main(int argc, char *argv[]) {
    char buf[BUF_LEN];
    char *p = &buf[0]; // buf === &buf[0]
    strncpy(p, argv[1], BUF_LEN); // give strcpy a limit
    //strcpy(p, argv[1]);  // unbounded memory copy ("stack overflow")
    return 0;
}
