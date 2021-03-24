#include "classe_Sculptor.h"

void Sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius) {

    for (int vx = 0; vx < this->nx; vx++) {
        int xrai = (vx-xcenter) * (vx-xcenter);
        for (int vy = 0; vy < this->ny; vy++) {
            int yrai = (vy-ycenter) * (vy-ycenter);
            for (int vz = 0; vz < this->nz; vz++) {
                int zrai = (vz-zcenter) * (vz-zcenter);

                if ( (xrai + yrai + zrai) <= (radius * radius) ) {
                    if ((this->nx >= vx) && (this->ny >= vy) && (this->nz >= vz)) {
                        this->v[vx][vy][vz].isOn = false;
                    }
                }

            }
        }
    }
}
