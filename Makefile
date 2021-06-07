OBJS	= main.o forum.o post.o thread.o
OUT	= main
CC	= g++
FLAGS	= -c

all: t1

main.o: main.cpp forum.h samples.h
	$(CC) $(FLAGS) main.cpp
forum.o: forum.cpp forum.h
	$(CC) $(FLAGS) forum.cpp
thread.o: thread.cpp thread.h
	$(CC) $(FLAGS) thread.cpp
post.o: post.cpp post.h
	$(CC) $(FLAGS) post.cpp
t1: $(OBJS)
	$(CC) $(OBJS) -o $(OUT)

# clean up
clean:
	rm -f $(OBJS) $(OUT)
