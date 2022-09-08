#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *s1 = argv[1];
    char *s2 = argv[2];

/* string s1, string s2
    s3 = s1 + s2
    in a high level language
    in C, we use strcat
*/

    // nothing in buf
    char buf[128]; 
     // buf contains s1
    strncpy(buf, s1, sizeof(buf));
    // adds s2 to the end of s1
    strncat(buf, s2, sizeof(buf) - strlen(s1));

    printf("%s\n", buf);
    return 0;
}
