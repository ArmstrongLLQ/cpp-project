.SUFFIXES:.c .o

CC=gcc
SRCS=main.c
OBJS=$(SRCS:.cpp=.o)
EXEC=proc

all:$(OBJS)
	$(CC) -o $(EXEC) $(OBJS)
	@echo '-------------ok-----------'

.c.o:
	$(CC) -o $@ -c $<

clean:
	rm -f $(OBJS)
