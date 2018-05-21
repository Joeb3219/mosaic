#include <stdlib.h>
#include <stdio.h>
#include "bmp.h"


BMP* createBMP(){
	BMP* bmp = malloc(sizeof(BMP));

	bmp->height = 0;
	bmp->width = 0;
	bmp->pixels = NULL;

	return bmp;
}


void destroyBMP(BMP* in){

}


BMP* readBMP(char* file){
	if(file == NULL) return NULL;
	FILE* fd = fopen(file, "r");
	if(fd == NULL) return NULL;

	BMP* bmp = createBMP();



	return bmp;
}


unsigned int readPixelBMP(BMP* bmp, int x, int y){
	return -1;
}


void setPixelBMP(BMP* bmp, int x, int y, unsigned int pixel){

}


void saveBMP(BMP* bmp, char* outfile){

}


BMP* scale(BMP* in, int scale){
	BMP* bmp = createBMP();

	return bmp;
}


