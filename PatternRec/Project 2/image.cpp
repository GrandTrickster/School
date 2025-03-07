#include <stdlib.h>
#include <stdio.h>

using namespace std;

	#include "image.h"

ImageType::ImageType()
{
 N = 0;
 M = 0;
 Q = 0;

 pixelValue = NULL;
}

ImageType::ImageType(int tmpN, int tmpM, int tmpQ)
{
 int i, j;

 N = tmpN;
 M = tmpM;
 Q = tmpQ;

 pixelValue = new RGB* [N];
 for(i=0; i<N; i++) {
   pixelValue[i] = new RGB[M];
   for(j=0; j<M; j++)
   {
     pixelValue[i][j].r = 0;
     pixelValue[i][j].g = 0;
     pixelValue[i][j].b = 0;
   }
 }
}

void ImageType::getImageInfo(int& rows, int& cols, int& levels)
{
 rows = N;
 cols = M;
 levels = Q;
} 

void ImageType::setImageInfo(int rows, int cols, int levels)
{
 N= rows;
 M= cols;
 Q= levels;
} 

void ImageType::setPixelVal(int i, int j, RGB val)
{
 pixelValue[i][j].r = val.r;
 pixelValue[i][j].g = val.g;
 pixelValue[i][j].b = val.b;
}

void ImageType::getPixelVal(int i, int j, RGB& val)
{
 val.r = pixelValue[i][j].r;
 val.g = pixelValue[i][j].g;
 val.b = pixelValue[i][j].b;
}
