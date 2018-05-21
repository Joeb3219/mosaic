#ifndef MOSAIC_H_

	#define MOSAIC_H_

	typedef struct{
		int int_numBlocksX;
		int int_numBlocksY;
		int int_queueFactor;
		int flag_help;
		char* str_mosaicName;
		char* str_imgsDirName;
	} Args;

#endif