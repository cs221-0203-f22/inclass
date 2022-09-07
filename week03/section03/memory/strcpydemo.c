#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char buf[32]; // local variable. gone when function exits

#if 0 // bugs follow!
    // this does not make a copy of the string
    // it give you another variable containing the same memory addr as argv[1]
    char *s = argv[1]; 

    s += 'a'; // nope
    s.append('a'); // nope

    strcpy(buf, argv[1]); // unbounded memory copy
    return buf; // bad idea 
#endif

    // limit memory copy to size of buf, leave room for the null
    strncpy(buf, argv[1], sizeof(buf) - 1); 
}
