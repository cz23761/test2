CC = g++
CFLAGS = -std=c++11 -O2 -Wall
SRC = main.cpp disk.cpp system.cpp
EXEC = disk

$(EXEC): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(EXEC)

clean:
	rm -f $(EXEC)