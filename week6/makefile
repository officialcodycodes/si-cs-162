CC=g++ -std=c++11
EXE_FILE = prog

all: $(EXE_FILE)

$(EXE_FILE): main.cpp store.o
	$(CC) main.cpp store.o -o $(EXE_FILE)

store.o: store.h store.cpp
	$(CC) -c store.cpp

clean:
	rm -f *.o $(EXE_FILE)