#include "classe_Sculptor.h"

void Sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1) {
    for (int vx = x0; vx <= x1; vx++) {
        for (int vy = y0; vy <= y1; vy++) {
            for (int vz = z0; vz <= z1; vz++) {
                if ((this->nx >= vx) && (this->ny >= vy) && (this->nz >= vz)) {
                    this->v[vx][vy][vz].isOn = false;
                }
            }
        }
    }
}
