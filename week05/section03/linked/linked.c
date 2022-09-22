#include <stdio.h>
#include <stdlib.h>

struct foo {
    struct foo *next;
    int val;
};

int main(int argc, char *argv[]) {
    struct foo *head = NULL;
    
    for (int i = 1; i < argc; i++) {
        int val = atoi(argv[i]);

        struct foo *pf = malloc(sizeof(struct foo));
        if (!pf) {
            printf("malloc failed\n");
            exit(-1);
        }
        pf->val = val;
        pf->next = NULL;

        // if no head, pf is first item
        if (!head)
            head = pf;
        else {
            struct foo *walk = head;
            while (walk->next != NULL)
                walk = walk->next;
        }

    }

    // TODO free all the things!
}
