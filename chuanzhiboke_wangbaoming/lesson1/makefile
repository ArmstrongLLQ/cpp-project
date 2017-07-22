.SUFFIXES:.cpp .o

CC=g++
SRCS=hello.cpp
OBJS=$(SRCS:.cpp=.o)
EXEC=hello

all:$(OBJS)
	$(CC) -o $(EXEC) $(OBJS)
	@echo '-------------ok---------------'

.cpp.o:
	$(CC) -o $@ -c $<

clean:
	rm -f $(OBJS)
	rm -f $(EXEC)
