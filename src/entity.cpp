#include "entity.h"

        Entity::Entity() {
            x = 0;
            y = 0;
            z = 0;
            theta = 0;
            phi = 0;
        }
        Entity::Entity(double ix,double iy,double iz,double itheta,double iphi) {
            x = ix;
            y = iy;
            z = iz;
            theta = itheta;
            phi = iphi:
        }

        double Entity::getX() {
            return x;
        }
        double Entity::getY() {
            return y;
        }
        double Entity::getZ() {
            return z;
        }
        double Entity::getPhi() {
            return phi;
        }
        double Entity::getTheta() {
            return theta;
        }
        
        void Entity::setX(double nx) {
            x = nx;
        }
        void Entity::setY(double ny) {
            y = ny;
        }
        void Entity::setZ(double nz) {
            z = nz;
        }
        void Entity::setPhi(double nphi) {
            phi = nphi;
        }
        void Entity::setTheta(double ntheta) {
            theta = ntheta;
        }

        void Entity::translateX(double deltax) {
            x += deltax;
        }
        
        void Entity::translateY(double deltay) {
            y += deltay;
        }
        void Entity::translateZ(double deltaz) {
            z += deltaz;
        }

        void Entity::rotatePhi(double deltaphi){
            phi = (phi + deltaphi) % 2*MATH.PI;
        }

        void Entity::rotateTheta(double deltatheta){
            theta = (theta + deltatheta) % 2*MATH.PI;
        }