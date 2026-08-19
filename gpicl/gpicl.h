/*gpicl.h*/

#ifndef GPICL_
#define GPICL_

#define GPICL_VERSION 1
#define GPICL_NAME "GPICL"

// picture
struct gpicl_s*GPIC;

/*function*/
typedef void(*pfnGetPicture)(GPIC);
typedef void(*pfnPictureData(GPIC, const char* NAME, const char* EXTENSION, unsigned char** PIC);
typedef void(*pfnFreePicture)(GPIC);
typedef void(*pfnDrawPicture(GPIC);

#endif
