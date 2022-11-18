#include <poll.h>
#include <stdbool.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#include "polldemo2.h"

int main(int argc, char **argv) {
    bool eof = false;
    struct pollfd my_polls[NUM_POLLS];
    int num_polls = 0;
    int num_readable = 0;

    my_polls[0].fd = STDIN_FILENO;
    my_polls[0].events = POLLIN;
    my_polls[0].revents = 0;
    num_polls++;
    
    while (!eof) {
        num_readable = poll(my_polls, num_polls, TIMEOUT);
        if (num_readable > 0) {
            if (my_polls[0].revents & POLLIN) {
                printf("readable!\n");
            }
        } else if (num_readable == -1) {
            perror("poll failed");
            exit(-1);
        }
    }
}
