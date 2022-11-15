#include <poll.h>

#define TIMEOUT 50

struct pollfd pfds[NPOLLS];

init_pfd(struct pollfd *pfd) 
    pfd->events = POLLIN
    pfd->fd = STDIN_FILENO
    
while !eof
    int nreadable = poll(pfds, NPOLLS, TIMEOUT);
    if nreadable > 0
        //read from readable fds
        loop over all pfds
        if pfd[i].revents & POLLIN
            read from pfd[i].fd
    else if nreadable == -1
        // error!

return 0
