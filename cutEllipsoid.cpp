#include "classe_Sculptor.h"

void Sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz) {

    for (int vx = 0; vx < this->nx; vx++) {
        double xrai = ( ((double) (vx - xcenter) *  (double) (vx - xcenter)) / ((double) rx * rx) );
        for (int vy = 0; vy < this->ny; vy++) {
            double yrai = ( ((double) (vy - ycenter) *  (double) (vy - ycenter)) / ((double) ry * ry) );
            for (int vz = 0; vz < this->nz; vz++) {
                double zrai = ( ((double) (vz - zcenter) *  (double) (vz - zcenter)) / ((double) rz * rz) );

                if ( (xrai + yrai + zrai) <= 1) {
                    if ((this->nx >= vx) && (this->ny >= vy) && (this->nz >= vz)) {
                        this->v[vx][vy][vz].isOn = false;
                    }
                }

            }
        }
    }
}
