# PROG is the name of the executable program
PROG = linked

# OBJS is a list of the .o files to be compiled from .c source
OBJS = linked.o

# Pattern rule to compile .o files from .c source
%.o: %.c
	gcc -c -g -o $@ $<

# Link the executable together from the .o files and C runtime lib
$(PROG): $(OBJS)
	gcc -g -o $@ $^

# Remove build products
clean:
	rm -rf $(PROG) $(OBJS)
	
