.SUFFIXES:.c .o

CC=gcc
SRCS1=main.c
SRCS2=server.c
OBJS1=$(SRCS1:.c=.o)
OBJS2=$(SRCS2:.c=.o)
EXEC1=client
EXEC2=server

all:$(OBJS1) $(OBJS2)
	$(CC) -o $(EXEC1) $(OBJS1)
	$(CC) -o $(EXEC2) $(OBJS2)
	@echo '-------------ok-----------'

.c.o:
	$(CC) -g -o $@ -c $<

clean:
	rm -f $(OBJS1)
	rm -f $(OBJS2)
