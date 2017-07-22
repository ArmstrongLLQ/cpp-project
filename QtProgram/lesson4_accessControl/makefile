.SUFFIXES:.cpp .o

CC=g++
SRCS=main.cpp
OBJS=$(SRCS:.cpp=.o)
EXEC=proc

all:$(OBJS)
	g++ -o $(EXEC) $(OBJS)
	@echo '-------------ok-----------'

.cpp.o:
	g++ -o $@ -c $<

clean:
	rm -f $(OBJS)
