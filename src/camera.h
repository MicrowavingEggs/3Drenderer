#ifndef camera_h
#define camera_h
#include "entity.h"


class Camera : public Entity {
    private:
        int w;
        int h;
    public :
        Camera() : Entity(){};
        ~Camera();
        Camera(int width,int height,double x,double y,double z,double theta,double phi) : Entity(x,y,z,theta,phi){};
};
#endif camera_h