#ifndef camera_h
#define camera_h
#include "entity.h"


class Camera : public Entity {
    private:
        int w;
        int h;
        int fovphi; // in deg.
        int fovtheta; // in deg.
    public :
        Camera() : Entity(){};
        ~Camera();
        Camera(int width,int height,int fovtheta,int fovphi,double x,double y,double z,double theta,double phi) : Entity(x,y,z,theta,phi){};
        bool castRay(int i, int j); // return true if the ray hit a face, false otherwise
};
#endif