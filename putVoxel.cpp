#include "classe_Sculptor.h"

void Sculptor::putVoxel(int x, int y, int z) {
    if ((this->nx >= x) && (this->ny >= y) && (this->nz >= z)) {
        this->v[x][y][z].isOn = true;
        this->v[x][y][z].r = this->r;
        this->v[x][y][z].g = this->g;
        this->v[x][y][z].b = this->b;
        this->v[x][y][z].a = this->a;
    }
}
