#include <math.h>
double dotProduct(double a[3],double b[3]){
    return a[0]*b[0] + a[1]*b[1] + a[2]*b[2];
}

double* crossProduct(double a[3],double b[3]) {
    static double res[3];
    res[0] = a[1]*b[2] - a[2]*b[1];
    res[1] = -(a[0]*b[2] - a[2]*b[0]);
    res[2] = a[0]*b[1] - a[1]*b[0];
    return res;
}

double abs(double number){
    (number<=0) ? -1 * number : number;
}

double* addArrays(double a[3], double b[3]){
    static double res[3];
    res[0] = a[0] + b[0];
    res[1] = a[1] + b[1];
    res[2] = a[2] + b[2];
    return res;
}

double* scalarArray(double t, double a[3]){
    static double res[3];
    res[0] = t*a[0];
    res[1] = t*a[1];
    res[2] = t*a[2];
    return res;
}

bool isInTriangle(double q[3], double vertexes[3][3],double normal[3]){
    double ba[3]{vertexes[1][0]-vertexes[0][0],vertexes[1][1]-vertexes[0][1],vertexes[1][2]-vertexes[0][2]};
    double cb[3]{vertexes[2][0]-vertexes[1][0],vertexes[2][1]-vertexes[1][1],vertexes[2][2]-vertexes[1][2]};
    double ac[3]{vertexes[0][0]-vertexes[2][0],vertexes[0][1]-vertexes[2][1],vertexes[2][2]-vertexes[2][2]};
    double qa[3]{q[0]-vertexes[0][0],q[1]-vertexes[0][1],q[2]-vertexes[0][2]};
    double qb[3]{q[0]-vertexes[1][0],q[1]-vertexes[1][1],q[2]-vertexes[1][2]};
    double qc[3]{q[0]-vertexes[2][0],q[1]-vertexes[2][1],q[2]-vertexes[2][2]};
    return (
        (dotProduct(crossProduct(ba,qa),normal) >= 0) &&
        (dotProduct(crossProduct(cb,qb),normal) >= 0) &&
        (dotProduct(crossProduct(ac,qc),normal) >= 0)
    );
}

double dist(double a[3],double b[3]){
    return sqrt(pow(b[0]-a[0],2) + pow(b[1]-a[1],2)+ pow(b[2]-a[2],2));
}