#include <stdio.h>
#include <stdlib.h>

// typedef defines a new data type
typedef char board_t [3][3];

// ints is a new struct type whose elements are i and j
typedef struct {
    int i;
    int j;
} ints;

struct ints2 {
    int i; 
    int j;
};

int main(int argc, char **argv) {
/*
    ints i;
    struct ints2 i2;
*/
    board_t board;

    if (argc != 10) {
        printf("invalid args\n");
        exit(-1);
    }
    
    int i = 1;
    int rows;
    int cols;
    
    for (rows = 0; rows < 3; rows++) {
        for (cols = 0; cols < 3; cols++) {
            board[rows][cols] = argv[i][0];
            i++;
        }
    }

    for (rows = 0; rows < 3; rows++) {
        for (cols = 0; cols < 3; cols++) {
            printf("%c ", board[rows][cols]);
        }
        printf("---+---+---");
    }
}
