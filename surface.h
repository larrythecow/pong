#ifndef SURFACE_H_
#define SURFACE_H_ 
#include <SDL/SDL_image.h>

class Surface {
public:

    static SDL_Surface* loadImg(const char* imgFile) {
        //SDL_Surface *surfTemp = IMG_Load(imgFile);

        SDL_Surface *surfTemp;
        if (!(surfTemp = IMG_Load(imgFile))) {
            printf("IMG_Load: %s\n", IMG_GetError());
        }
        return surfTemp;
    }

    static void drawImg(SDL_Surface *src, SDL_Surface *dst, int x, int y) {
        SDL_Flip(dst);
        SDL_Rect drect;
        drect.x = x;
        drect.y = y;

        SDL_BlitSurface(src, NULL, dst, &drect);
        SDL_Flip(dst);
    }


};


#endif