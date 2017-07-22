.SUFFIXES:.c .o

CC=gcc
SRCS1=shmread.c
SRCS2=shmwrite.c
OBJS1=$(SRCS1:.c=.o)
OBJS2=$(SRCS2:.c=.o)
EXEC1=shmread
EXEC2=shmwrite

all:$(OBJS1) $(BOJS2)
	$(CC) -o $(EXEC1) $(OBJS1)
	$(CC) -o $(EXEC2) $(OBJS2)
	@echo '-------------ok-----------'

.c.o:
	$(CC) -o $@ -c $<

clean:
	rm -f $(OBJS1)
	rm -f $(OBJS2)
