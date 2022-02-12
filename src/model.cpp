#include "model.h"

Model::Model(double[][] iv, double[][]ivt, double[][]i_f, double x, double y, double z, double theta, double phi) : Entity(x,y,z,theta,phi) {
            v = iv; // TODO : The 3DModel must translated and suche as (0,0,0,0,0) ->  (x,y,z,theta,phi)
            vt = ivt; // TODO : Same.
            f = i_f; // TODO Same.
}