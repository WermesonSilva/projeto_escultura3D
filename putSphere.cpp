#include "classe_Sculptor.h"

void Sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius) {

    for (int vx = 0; vx < this->nx; vx++) {
        int xrai = (vx-xcenter) * (vx-xcenter); //(x - a) ^ 2 = (x - a) (x - a)
        for (int vy = 0; vy < this->ny; vy++) {
            int yrai = (vy-ycenter) * (vy-ycenter); //(y - b) ^ 2 = (y - b) (y - b)
            for (int vz = 0; vz < this->nz; vz++) {
                int zrai = (vz-zcenter) * (vz-zcenter); //(z - c) ^ 2 = (z - c) (z - c)

                if ( (xrai + yrai + zrai) <= (radius * radius) ) {
                    if ((this->nx >= vx) && (this->ny >= vy) && (this->nz >= vz)) {
                        this->v[vx][vy][vz].isOn = true;
                        this->v[vx][vy][vz].r = this->r;
                        this->v[vx][vy][vz].g = this->g;
                        this->v[vx][vy][vz].b = this->b;
                        this->v[vx][vy][vz].a = this->a;
                    }
                }

            }
        }
    }
}
