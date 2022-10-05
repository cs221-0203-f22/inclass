/*
    check_diag_win takes a board and a player ('X' or 'O')
    and returns true if the board is a win for that player
*/
bool check_diag_win(board_t board, char player) 
    for (r = 0, c = 0; r < 3; r++, c++)
        /* one loop: 0,0
           second loop, 1,1
           third        2,2
        */
        if (board[r][c] != player)
            return false;
    return true

/*
    X
       X
          X
*/
