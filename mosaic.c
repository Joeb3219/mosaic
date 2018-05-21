#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "mosaic.h"
#include "bmp.h"

// Defines
#define flagOrDefault(A, B) ( (isFlagSet(argc, argv, A)) ? 1 : B )
#define argOrDefault(A, B) ((getArgumentFollowingFlag(argc, argv, A) == NULL) ? B : getArgumentFollowingFlag(argc, argv, A) )


// Function declarations
int isFlagSet(int argc, char** argv, char* flag);
char* getArgumentFollowingFlag(int argc, char** argv, char* flag);
Args* parseArgs(int argc, char** argv);
void createMosaic(Args* args);


// Function implementations
int isFlagSet(int argc, char** argv, char* flag){
	int i;
	for(i = 0; i < argc; i ++){
		if(strcmp(flag, argv[i]) == 0){
			return 1;
		}
	}
	return 0;
}

char* getArgumentFollowingFlag(int argc, char** argv, char* flag){
	int i;
	for(i = 0; i < argc - 1; i ++){
		if(strcmp(flag, argv[i]) == 0){
			return argv[i + 1];
		}
	}
	return NULL;
}

Args* parseArgs(int argc, char** argv){
	Args* args = malloc(sizeof(Args));

	args->int_numBlocksX 	= atoi(argOrDefault("-x", "8"));
	args->int_numBlocksY 	= atoi(argOrDefault("-y", "8"));
	args->flag_help			= flagOrDefault("-h", 0) || flagOrDefault("--help", 0);
	args->int_queueFactor	= atoi(argOrDefault("-q", "1"));
	args->str_mosaicName	= argOrDefault("-s", NULL);
	args->str_imgsDirName	= argOrDefault("-d", NULL);

	return args;

}


void createMosaic(Args* args){
	BMP* source = readBMP(args->str_mosaicName);
	if(source == NULL){
		printf("Invalid file: %s\n", args->str_mosaicName);
		return;
	}


}


int main(int argc, char** argv){
	Args* args = parseArgs(argc, argv);

	if(args->flag_help){
		printf("=============================================\n");
		printf("Usage: %s <arguments>\n", argv[0]);
		printf("Flags\n");
		printf("\t-x:\tNumber of blocks in the x direction\n\t\t(default: 8)\n");
		printf("\t-y:\tNumber of blocks in the y direction\n\t\t(default: 8)\n");
		printf("\t-q:\tThe Queueing factor for weighting preused pictures\n\t\t(default: 1)\n");
		printf("\t-s:\tInput image for turning into mosaic\n");
		printf("\t-d:\tDirectory of images to use in mosaic\n");
		printf("\t-h, --help:\t Brings up this dialog\n");
		printf("=============================================\n");
		exit(0);
	}

	createMosaic(args);

	free(args);

	return 0;
}