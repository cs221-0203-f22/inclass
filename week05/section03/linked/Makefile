# Name of executable program
PROG = linked

# List of .o files to be compiled
OBJS = linked.o

# Pattern rule to compile .c files to .o files
%.o: %.c
	gcc -c -g -o $@ $<

# Link the OBJs together into an executable
$(PROG): $(OBJS)
	gcc -g -o $@ $^

# Remove build products
clean:
	rm -rf $(PROG) $(OBJS)
