#ifndef window_h
#define window_h
#include "camera.h"

class Window {
    private :
        int w;
        int h;
        //Renderer renderer //TODO : #include <sdl.h>
        Camera camera;
    
    public :
        Window();
        Window(int width, int height);
        Window(int width, int height,Camera cam);
        ~Window();
        void drawPixel(int i, int j, bool rayhit); // draw a white pixel at (i,j) if the ray casted hit a face. black otherwise.
        void draw(); //cast rays from the camera and draws on the renderer.
};

#endif