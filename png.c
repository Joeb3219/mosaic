#include <stdlib.h>
#include <stdio.h>
#include "png.h"


PNG* createPNG(){
	PNG* png = malloc(sizeof(PNG));

	png->height = 0;
	png->width = 0;
	png->pixels = NULL;

	return png;
}


void destroyPNG(PNG* in){

}


PNG* readPNG(char* file){
	PNG* png = createPNG();

	return png;
}


unsigned int readPixelPNG(PNG* png, int x, int y){
	return -1;
}


void setPixelPNG(PNG* png, int x, int y, unsigned int pixel){

}


void savePNG(PNG* png, char* outfile){

}


PNG* scale(PNG* in, int scale){
	PNG* png = createPNG();

	return png;
}


