CC = gcc
SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)
#test: $(SRCS)
#	gcc -o $@ $^
#all: 1_2.o 1_3.o 2_9.o
all: $(OBJS)
#$(OBJS): %.o: %.c
%.o: %.c
	-$(CC) -o $@ $^ -lm
.PHONY: all

#%.o: %.c
#	-cc -o $@ $^ -lm

clean:
	@echo "Clean..."
	-$(RM) *.o
.PHONY: clean
