#include <poll.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "polldemo2.h"

int main(int argc, char **argv) {
    struct pollfd my_fds[MAXPOLLS];
    bool eof = false;
    int num_polls = 0;
    int num_readable = 0;
    
    // todo: generalize for more than one pollfd
    my_fds[0].fd = STDIN_FILENO;
    my_fds[0].events = POLLIN;
    my_fds[0].revents = 0;
    num_polls++;

    while (!eof) {
        num_readable = poll(my_fds, num_polls, TIMEOUT);
        if (num_readable == -1) {
            perror("poll failed");
            exit(-1);
        } else if (num_readable > 0) {
            // todo: generalize for more than one pollfd

            // bitwise and: is POLLIN bit flag set in revents
            if (my_fds[0].revents & POLLIN) {
                // revents contains POLLIN
                printf("pollfd is readable\n");
            }
        }
    }
    
}
