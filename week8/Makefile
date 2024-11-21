CC=g++
EXE_FILE = prog

all: $(EXE_FILE)

$(EXE_FILE): main.cpp rectangle.o circle.o
	$(CC) main.cpp rectangle.o circle.o -o $(EXE_FILE)

# shape.o: shape.h shape.cpp
# 	$(CC) -c shape.cpp

rectangle.o: rectangle.h rectangle.cpp
	$(CC) -c rectangle.cpp

circle.o: circle.h circle.cpp
	$(CC) -c circle.cpp

clean:
	rm -f *.o $(EXE_FILE)