#source dir
SRC_DIR = lib

#output dir
OUTPUT_DIR = obj

#tools
CC = gcc
CFLAGS = -c

all: check_out_dir program

check_out_dir :
	mkdir -p ${OUTPUT_DIR}

program: $(OUTPUT_DIR)/vector3.o $(OUTPUT_DIR)/main.o
	$(CC) $(OUTPUT_DIR)/vector3.o $(OUTPUT_DIR)/main.o -o program -lm

$(OUTPUT_DIR)/vector3.o: $(SRC_DIR)/vector3.c
	$(CC) $(CFLAGS) $(SRC_DIR)/vector3.c -o $(OUTPUT_DIR)/vector3.o

$(OUTPUT_DIR)/main.o: main.c
	$(CC) $(CFLAGS) main.c -o $(OUTPUT_DIR)/main.o

clean:
	rm -rf $(OUTPUT_DIR) program

.PHONY: all  check_out_dir program clean 
