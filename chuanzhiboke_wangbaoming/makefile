.SUFFIXES:.cpp .o

CC=g++
SRCS=demo02_socket.cpp
OBJS=$(SRCS:.cpp=.o)
EXEC=socket

all:$(OBJS)
	$(CC) -o $(EXEC) $(OBJS)
	@echo '0.0.0.0.0.0.0.0.0.0.0.0.0.0.'
	
.cpp.o:
	$(CC) -o $@ -c $<

clean:
	rm -f $(OBJS)
	rm -f $(EXEC)
