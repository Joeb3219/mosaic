#ifndef BMP_H_

	#define BMP_H_

	typedef struct{
		int height;
		int width;
		int* pixels;
	} BMP;

	BMP* createBMP();
	void destroyBMP(BMP* in);
	BMP* readBMP(char* file);
	unsigned int readPixelBMP(BMP* bmp, int x, int y);
	void setPixelBMP(BMP* bmp, int x, int y, unsigned int pixel);
	void saveBMP(BMP* bmp, char* outfile);
	BMP* scale(BMP* in, int scale);


#endif