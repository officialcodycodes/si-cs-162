CC=g++
EXE_FILE = prog

all: $(EXE_FILE)

$(EXE_FILE): football.o football.h main.cpp
	$(CC) football.o main.cpp -o $(EXE_FILE)

football.o: football.h football.cpp
	$(CC) -c football.cpp

clean:
	rm -f *.o $(EXE_FILE)