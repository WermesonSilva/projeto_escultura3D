#include "classe_Sculptor.h"

void Sculptor::cutVoxel(int x, int y, int z) {
    if ((this->nx >= x) && (this->ny >= y) && (this->nz >= z)) {
        this->v[x][y][z].isOn = false;
    }
}
