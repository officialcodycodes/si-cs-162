OBJS	= activity1Solution.o function.o
SOURCE	= activity1Solution.cpp, function.cpp
HEADER	= act.h,
OUT	= a.out
CC	 = g++
FLAGS	 = -g -c -Wall
LFLAGS	 = 

all: $(OBJS)
	$(CC) -g $(OBJS) -o $(OUT) $(LFLAGS)

activity1Solution.o: activity1Solution.cpp,
	$(CC) $(FLAGS) activity1Solution.cpp, 

function.o: function.cpp
	$(CC) $(FLAGS) function.cpp 


clean:
	rm -f $(OBJS) $(OUT)