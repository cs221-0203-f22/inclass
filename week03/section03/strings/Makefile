PROG = strings
OBJS = strings.o passwords.o

# pattern rule builds .o files from their .c source
%.o: %.c
	gcc -c -g -o $@ $<

# link the OBJS together into an executable program
$(PROG): $(OBJS)
	gcc -g -o $@ $^

# use before git add, so you don't commit build products
clean:
	rm -rf $(PROG) $(OBJS)
