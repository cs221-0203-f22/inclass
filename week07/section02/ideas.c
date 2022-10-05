/* board_t is a new type (_t is conventional in C)
 * board_t is a two-dimensional array of chars
 * TTT board is 3x3, so a 2D array is convenient
 */

typedef char board_t[3][3];

// alternative
struct board_st {
    char spots[3][3];
};

check_win(struct board_st *pb) {
    if (pb->spots[1][1] == 'X')
}

// looping to look for wins

for (int r = 0; ...)
    for (int c = 0; ...)

/*
    X
        X
            X
*/

check_diag(board_t b, char player)
    for (r = 0, c = 0; r < 3; r++, c++)
        /*
            0,0
            1,1
            2,2
        */
        if (b[r][c] != player)
            return false;
    return true;

// alternative by Quinn
char ch = player // 'X' or 'O'
for int i = 0; i < 9 
    if b[diag_right][diag_right] != ch 
        break
    else if b[diag_right] == ch
        // win for player ch

        
init_board(board_t b, argc, argv) 
    int i = 1;
    for r = 0; r < 3; r++
        for c = 0 ...
            b[r][c] = argv[i][0];
            i++


// to get user input (row, col)

fscanf(STDIN, "%d %d", &r, &c)

        
