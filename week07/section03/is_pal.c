#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*
    is_pal checks for palindromes, which are words/phrases
    spelled the same forwards and backwards

    abba
    aya
    racecar
    able was I ere I saw elba
*/

bool is_pal_rec(char *phrase, int start, int end) {
    // base case: no more characters to check
    if (end <= start) {
        int i = * (char*) NULL;
        //return true;
    }

    // recursive case: if first and last chars match, keep going
    if (phrase[start] == phrase[end])
        return is_pal_rec(phrase, start + 1, end - 1);
    else
        return false; // first and last don't match, stop
}

int main(int argc, char **argv) {
    char *phrase = argv[1];

    bool is_pal = is_pal_rec(phrase, 0, strlen(phrase) - 1);
    if (is_pal)
        printf("is a palindrome\n");
    else
        printf("is not a palindrome\n");

    return 0;
}
