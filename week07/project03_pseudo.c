minimax(board, player, depth)
    // base case
    if board is a win for X
        score = 10 - depth
    if board is a win for O
        score = -10 + depth
    if board is a draw 
        score is 0

    // recursive case
    if player == 'X'
        score initialized to a small number
        loop over non-empty rows and columns
            b[r][c] = player // make move
            score = MAX(score, minimax(... depth + 1))
            b[r][c] = '_' // unmake move
    else
        score initialized to a large number
        loop over non-empty rows and columns
            // make move
            score = MIN(score, minimax(...depth + 1))
            // unmake move

    return score
            
find_best_move(board, player, int *pr, int *pc)
    loop over rows
        loop over columns
            b[r][c] = player // trial move
            score = minimax(b, other player, depth 0)
            b[r][c] = '_'  // unmake trial move

            if score is new best for player
                best = score
                *pr = r
                *pc = c

main()
    if argc == 1
        loop
            printf("X: ")
            fscanf(stdin, "%d %d", &r, &c)

            if r, c is a legal move
                b[r][c] = 'X'
                if terminal_state(b)
                    break

                find_best_move(b, 'O', &r, &c)
                b[r][c] = 'O'
                print("O: ", r, c)
                if terminal_state(b)
                    break
            else
                print("illegal move")
    else
        print_board()
        find_best_move(b, 'O', &r, &c)
        print("O: ", r, c)
