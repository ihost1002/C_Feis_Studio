cc = gcc
all: main
.PHONY: all
main: main.o hello.o
	-$(cc) -o $@ $^
%.o: %.c
	-$(cc) -c $< -o $@

clean: 
	-$(RM) main *.o
.PHONY: clean
