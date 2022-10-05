#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/* is_pal_rec returns true if the phrase is a
    palindrome, which is spelled the same forwards and backwards
*/

bool is_pal_iter(char *phrase, int start, int end) {
    for (int i = 0; i < end; i++) {
        if (phrase[start] != phrase[end])
            return false;
        start++;
        end--;
    }
}

bool is_pal_rec(char *phrase, int start, int end) {
    // base case: first and last not equal
    if (phrase[start] != phrase[end]) 
        return false;

    // base case: end has crossed start
    // array of 1 is a palindrome with itself
    if (end <= start)
        return true;

    // recursive case
    return is_pal_rec(phrase, start + 1, end - 1);
}

int main(int argc, char **argv) {
    char *phrase = argv[1];

    bool pal = is_pal_rec(phrase, 0, strlen(phrase) - 1);
    if (pal)
        printf("is a palindrome\n");
    else
        printf("is not a palindrome\n");
}
