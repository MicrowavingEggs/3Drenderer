#include "model.h"

Model::Model(){
    
}

Model::Model(std::vector<double[3]> iv, std::vector<double[3]> ivt, std::vector<double[3]>i_f, double x, double y, double z, double theta, double phi) : Entity(x,y,z,theta,phi) {
            v = iv; // TODO : The 3DModel must translate and rotate such as (0,0,0,0,0) ->  (x,y,z,theta,phi)
            vt = ivt; // TODO : Same.
            f = i_f; // TODO Same.
}