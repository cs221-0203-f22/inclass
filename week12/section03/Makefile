PROG = polldemo2
OBJS = polldemo2.o

# pattern rule: compile .o files from their .c equiv
%.o: %.c
	gcc -c -g -o $@ $<

# link rule: link executable from all .o files
$(PROG): $(OBJS)
	gcc -g -o $@ $^

clean:
	rm -rf $(PROG) $(OBJS)
