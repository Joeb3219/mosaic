#ifndef PNG_H_

	#define PNG_H_

	typedef struct{
		int height;
		int width;
		int* pixels;
	} PNG;

	PNG* createPNG();
	void destroyPNG(PNG* in);
	PNG* readPNG(char* file);
	unsigned int readPixelPNG(PNG* png, int x, int y);
	void setPixelPNG(PNG* png, int x, int y, unsigned int pixel);
	void savePNG(PNG* png, char* outfile);
	PNG* scale(PNG* in, int scale);


#endif