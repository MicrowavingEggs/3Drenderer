#ifndef window_h
#define window_h
#include "camera.h"

class Window {
    private :
        int w;
        int h;
        Camera camera;
    
    public :
        Window(int width, int height);
        ~Window();
};

#endif window_h