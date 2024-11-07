CC=g++
EXE_FILE = prog

all: $(EXE_FILE)

$(EXE_FILE): main.cpp shape.o
	$(CC) main.cpp shape.o -o $(EXE_FILE)

clean:
	rm -f *.o $(EXE_FILE)