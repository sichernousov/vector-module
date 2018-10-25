#source dir
SRC_DIR = lib

#output dir
OUTPUT_DIR = obj

#tools
CC = gcc
CFLAGS = -c

all: program

program: vector3.o main.o
	$(CC) $(OUTPUT_DIR)/vector3.o $(OUTPUT_DIR)/main.o -o program

vector3.o: 
	$(CC) $(CFLAGS) $(SRC_DIR)/vector3.c -o $(OUTPUT_DIR)/vector3.o

main.o:
	$(CC) $(CFLAGS) main.c -o $(OUTPUT_DIR)/main.o

clean:
	rm -rf $(OUTPUT_DIR)/* program

.PHONY: clean
