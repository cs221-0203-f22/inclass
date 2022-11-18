PROG = polldemo2
OBJS = polldemo2.o

%.o: %.c
	gcc -c -g -o $@ $<

$(PROG): $(OBJS)
	gcc -g -o $@ $^

clean: 
	rm -rf $(PROG) $(OBJS)
