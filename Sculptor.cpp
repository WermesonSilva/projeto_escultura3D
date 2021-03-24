#include "classe_Sculptor.h"

Sculptor::Sculptor(int _nx, int _ny, int _nz) {
    nx = _nx;
    ny = _ny;
    nz = _nz;
    v = new Voxel**[nx];
    for (int cont1 = 0; cont1 < nx; cont1++) {
        v[cont1] = new Voxel*[ny];
    }
    for (int cont1 = 0; cont1 < nx; cont1++) {
        for (int cont2 = 0; cont2 < ny; cont2++) {
            v[cont1][cont2] = new Voxel[nz];
        }
    }
}

Sculptor::~Sculptor() {
    for (int cont1 = 0; cont1 < nx; cont1++) {
        for (int cont2 = 0; cont2 < ny; cont2++) {
            delete [] v[cont1][cont2];
        }
    }
    for (int cont1 = 0; cont1 < nx; cont1++) {
        delete [] v[cont1];
    }
    delete [] v;
}
