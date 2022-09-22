#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *next;
    int val;
};

int main(int argc, char *argv[]) {
    struct node *head = NULL;

    for (int i = 1; i < argc; i++) {
        struct node *pn = malloc(sizeof(struct node));
        printf("malloc %p\n", pn);
        
        pn->val = atoi(argv[i]);
        pn->next = NULL;

        if (head) {
            // walk the list looking for the end
            struct node *walk = head;
            while (walk->next) {
                walk = walk->next;
            }
            walk->next = pn;
        } else {
            // no head, pn becomes head
            head = pn;
        }
    }

    struct node *walk = head;
    while (walk) {
        printf("node val %d\n", walk->val);
        struct node *tmp = walk;
        walk = walk->next;
        printf("free %p\n", tmp);
        free(tmp);
    }
}
