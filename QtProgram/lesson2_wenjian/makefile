.SUFFIXES:.cpp .o

CC=g++
SRCS=main.cpp
OBJS=$(SRCS:.cpp=.o)
EXEC=hello

start:$(OBJS)
	$(CC) -o $(EXEC) $(OBJS)
	@echo '--------------ok----------------'
	
.cpp.o:
	$(CC) -o $@ -c $<
	
clean:
	rm -f $(OBJS)
	rm -f $(EXEC)'
