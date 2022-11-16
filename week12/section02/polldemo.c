#include <poll.h>

#define NPOLLS 50
#define TIMEOUT 50 //ms

struct pollfd pfds[NPOLLS]

pfds[0].fd = STDIN_FILENO
pfds[0].events = POLLIN

/* could initialize all
    -1 is a special fd for "invalid"

   could keep keep track of # valid fds
*/
while !eof
    int nreadable = poll(pfds, nvalidfds, TIMEOUT)
    for i =0 < nreadable
        if pfds[i].revents & POLLIN
            // accumulate chars in a string until \n
            read from pfds[i].fd
            if \n, print out accum string

