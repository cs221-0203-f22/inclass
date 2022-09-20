#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    char *s = argv[1];

    char product[32]; // array of 32 chars
    int product_len = 0;

    while (*s != ' ') {
        product[product_len] = *s;
        s++;
        product_len++;
    }

    int qty = atoi(s);

    product[product_len] = '\0';
    printf("product: %s qty: %d\n", product, qty);
}
