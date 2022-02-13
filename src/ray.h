#ifndef ray_h
#define ray_h

class Ray {
    private :
        double point[3];
        double direction[3];
        double range;

    public:
        double* getPoint();
        double* getDirection();
        void setPoint(double p[3]);
        void setDirection(double dir[3]);
        double* getIntersection(double vertexes[3][3], double normal[3]); // return the intersection between the ray and the face. if there's none or the range > this.range, return null;
};

#endif