#include "window.h"

Window::Window(){
    w = 800;
    h = 600;
    camera = Camera();
}

Window::Window(int width, int height){
    w = width;
    h = height;
    camera = Camera();
}

Window::Window(int width, int height,Camera cam){
    w = width;
    h = height;
    camera = cam;
}


Window::~Window(){

}

void Window::drawPixel(int i, int j, bool rayhit){
    // TODO
}

void Window::draw(){
    for(int i{0};i<h;i++){
        for(int j{0};j<w;j++){
            drawPixel(i,j,camera.castRay(i,j));
        }
    }
}