CC := gcc
EXE_NAME := mosaic

all: clean build

build: mosaic.c
	$(CC) -g -o $(EXE_NAME) mosaic.c image.c png.c

clean:
	rm -rf *.o $(EXE_NAME)
