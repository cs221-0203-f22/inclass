PROG = strings
OBJS = strings.o passwords.o

%.o: %.c
	gcc -c -g -o $@ $<

$(PROG): $(OBJS)
	gcc -g -o $@ $^

clean:
	rm -rf $(PROG) $(OBJS)
