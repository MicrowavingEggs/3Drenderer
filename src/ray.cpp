#include "ray.h"
#include "utils.cpp"

double* Ray::getPoint(){
    double static res[3];
    res[0] = point[0];
    res[1] = point[1];
    res[2] = point[2];
    return res;
}
double* Ray::getDirection(){
    double static res[3];
    res[0] = direction[0];
    res[1] = direction[1];
    res[2] = direction[2];
    return res;
}

void Ray::setPoint(double p[3]){
    point[0] = p[0];
    point[1] = p[1];
    point[2] = p[2];
}

void Ray::setDirection(double dir[3]){
    direction[0] = dir[0];
    direction[1] = dir[1];
    direction[2] = dir[2];
}
double* Ray::getIntersection(double vertexes[3][3], double normal[3]){
    double d = dotProduct(normal,vertexes[0]);
    double dPndir = abs(dotProduct(normal,direction));
    if (dPndir > 0.01){
        double t = (d - dotProduct(normal,point))/dPndir;
        double tempRes[3]{*getPoint()};
        double tempTDir[3]{*scalarArray(t,getDirection())};
        static double res[3]{*addArrays(tempRes,tempTDir)};
        return (isInTriangle(res,vertexes,normal)) ? res : nullptr;
    }
    return nullptr;
}