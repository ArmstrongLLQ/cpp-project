.SUFFIXES:.c .o

CC=gcc
SRCS=main.c
OBJS=$(SRCS:.c=.o)
EXEC=mydaemon

all:$(OBJS)
	$(CC) -o $(EXEC) $(OBJS)
	@echo '-------------ok---------------'

.cpp.o:
	$(CC) -o $@ -c $<

clean:
	rm -f $(OBJS)
	rm -f $(EXEC)
