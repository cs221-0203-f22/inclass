#include <stdio.h>
#include <stdlib.h>

struct board {
    char spots[3][3];  // spots is a 2D array of chars
};

/* typedef defines a new type
 * Using _t is a convention for type names
 * board_t is a type of 3x3 chars
 */
typedef char board_t[3][3];

int main(int argc, char **argv) {
    if (argc != 10) {
        printf("invalid args\n");
        exit(-1);
    }

    board_t board;

    int i = 1;
    int row;
    int col;

    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            board[row][col] = argv[i][0];
            i++;
        }
    }

    for (row = 0; row < 3; row++) {
        for (col = 0; col < 3; col++) {
            printf("%c ", board[row][col]);
        }
        printf("\n");
    }
    return 0;
}
