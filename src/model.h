#include "entity.h"
#include <string>

class Model : public Entity {
    private :
        double[][] v;
        double[][] vt;
        double[][] f;
        string name;

    public :
        Model(double[][] iv, double[][]ivt, double[][]i_f, double x, double y, double z, double theta, double phi) : Entity(x,y,z,theta,phi);
        ~Model();

}