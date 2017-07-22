.SUFFIXES:.c .o

CC=gcc
SRCS=main.c
OBJS=$(SRCS:.c=.o)
EXEC=signal

all:$(OBJS)
	$(CC) -o $(EXEC) $(OBJS)
	@echo '-------------ok-----------'

.c.o:
	$(CC) -o $@ -c $<

clean:
	rm -f $(OBJS)
