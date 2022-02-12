#ifndef model_h
#define model_h
#include "entity.h"
#include <string>
#include <vector>

class Model : public Entity {
    private :
        std::vector<double[3]> v;
        std::vector<double[3]> vt;
        std::vector<double[3]> f;
        std::string name;

    public :
        Model(); // Initial empty model. We can iterate over an .obj file to add each v/vt/f
        Model(std::vector<double[3]> iv, std::vector<double[3]> ivt, std::vector<double[3]>i_f, double x, double y, double z, double theta, double phi) : Entity(x,y,z,theta,phi){}; //usable if we want to copy and already set-up model.
        ~Model();

};

#endif model_h