
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

bool isInTriangle(double res[3], double vertexes[3][3],double normal[3]){
    // TODO
    // Define conditions of containement
    // return true if they're all satisfied, false otherwise.
}