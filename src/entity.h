#ifndef entity_h
#define entity_h

class Entity {
    private :
        double x;
        double y;
        double z;
        double theta;
        double phi;

    public :

        Entity();

        ~Entity();

        Entity(double x,double y,double z,double theta,double phi);

        double getX();
        double getY();
        double getZ();
        double getPhi();
        double getTheta();
        void setX(double nx);
        void setY(double ny);
        void setZ(double nz);
        void setPhi(double nphi);
        void setTheta(double ntheta);
        void translateX(double deltax);        
        void translateY(double deltay);
        void translateZ(double deltaz);
        void rotatePhi(double deltaphi);
        void rotateTheta(double deltatheta);
};

#endif camera_h