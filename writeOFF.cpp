#include "classe_Sculptor.h"
#include <iostream>
#include <fstream>
using namespace std;

void Sculptor::writeOFF(char* filename) {
    ofstream arquivo;
    arquivo.open(filename, ios::app);
    int qtd_blocs = 0;

    for (int vX = 0; vX < this->nx; vX++) {
        for (int vY = 0; vY < this->ny; vY++) {
            for (int vZ = 0; vZ < this->nz; vZ++) {
                if (this->v[vX][vY][vZ].isOn == true) {
                    qtd_blocs++;
                }
            }
        }
    }

    if (arquivo.is_open()) {
        arquivo << "OFF\n";
        arquivo << (qtd_blocs * 8) << " " << (qtd_blocs * 6) << " 0\n";

        //CORDENADAS DOS PONTOS
        for (int vX = 0; vX < this->nx; vX++) {
            for (int vY = 0; vY < this->ny; vY++) {
                for (int vZ = 0; vZ < this->nz; vZ++) {
                    if (this->v[vX][vY][vZ].isOn == true) {
                        arquivo << (-0.5 + vX) << " " << (0.5 + vY) << " " << (-0.5 + vZ) << "\n";
                        arquivo << (-0.5 + vX) << " " << (-0.5 + vY) << " " << (-0.5 + vZ) << "\n";
                        arquivo << (0.5 + vX) << " " << (-0.5 + vY)<< " " << (-0.5 + vZ) << "\n";
                        arquivo << (0.5 + vX) << " " << (0.5 + vY) << " " << (-0.5 + vZ) << "\n";
                        arquivo << (-0.5 + vX) << " " << (0.5 + vY) << " " << (0.5 + vZ) << "\n";
                        arquivo << (-0.5 + vX) << " " << (-0.5 + vY) << " " << (0.5 + vZ) << "\n";
                        arquivo << (0.5 + vX) << " " << (-0.5 + vY) << " " << (0.5 + vZ) << "\n";
                        arquivo << (0.5 + vX) << " " << (0.5 + vY) << " " << (0.5 + vZ) << "\n";
                    }
                }
            }
        }

        //DESIGNER DOS PONTOS
        qtd_blocs = 1;
        for (int vX = 0; vX < this->nx; vX++) {
            for (int vY = 0; vY < this->ny; vY++) {
                for (int vZ = 0; vZ < this->nz; vZ++) {
                    if (this->v[vX][vY][vZ].isOn == true) {
                        arquivo << "4 " << (0 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (3 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (2 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (1 + (qtd_blocs - 1) * 8) << " ";
                        if (this->v[vX][vY][vZ].r == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].r == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].r << " ";
                        }
                        if (this->v[vX][vY][vZ].g == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].g == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].g << " ";
                        }
                        if (this->v[vX][vY][vZ].b == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].b == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].b << " ";
                        }
                        if (this->v[vX][vY][vZ].a == 0) {
                            arquivo << "0.0" << "\n";
                        } else if (this->v[vX][vY][vZ].a == 1) {
                            arquivo << "1.0" << "\n";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].a << "\n";
                        }

                        arquivo << "4 " << (4 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (5 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (6 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (7 + (qtd_blocs - 1) * 8) << " ";
                        if (this->v[vX][vY][vZ].r == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].r == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].r << " ";
                        }
                        if (this->v[vX][vY][vZ].g == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].g == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].g << " ";
                        }
                        if (this->v[vX][vY][vZ].b == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].b == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].b << " ";
                        }
                        if (this->v[vX][vY][vZ].a == 0) {
                            arquivo << "0.0" << "\n";
                        } else if (this->v[vX][vY][vZ].a == 1) {
                            arquivo << "1.0" << "\n";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].a << "\n";
                        }

                        arquivo << "4 " << (0 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (1 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (5 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (4 + (qtd_blocs - 1) * 8) << " ";
                        if (this->v[vX][vY][vZ].r == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].r == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].r << " ";
                        }
                        if (this->v[vX][vY][vZ].g == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].g == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].g << " ";
                        }
                        if (this->v[vX][vY][vZ].b == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].b == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].b << " ";
                        }
                        if (this->v[vX][vY][vZ].a == 0) {
                            arquivo << "0.0" << "\n";
                        } else if (this->v[vX][vY][vZ].a == 1) {
                            arquivo << "1.0" << "\n";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].a << "\n";
                        }

                        arquivo << "4 " << (0 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (4 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (7 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (3 + (qtd_blocs - 1) * 8) << " ";
                        if (this->v[vX][vY][vZ].r == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].r == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].r << " ";
                        }
                        if (this->v[vX][vY][vZ].g == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].g == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].g << " ";
                        }
                        if (this->v[vX][vY][vZ].b == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].b == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].b << " ";
                        }
                        if (this->v[vX][vY][vZ].a == 0) {
                            arquivo << "0.0" << "\n";
                        } else if (this->v[vX][vY][vZ].a == 1) {
                            arquivo << "1.0" << "\n";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].a << "\n";
                        }

                        arquivo << "4 " << (3 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (7 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (6 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (2 + (qtd_blocs - 1) * 8) << " ";
                        if (this->v[vX][vY][vZ].r == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].r == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].r << " ";
                        }
                        if (this->v[vX][vY][vZ].g == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].g == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].g << " ";
                        }
                        if (this->v[vX][vY][vZ].b == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].b == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].b << " ";
                        }
                        if (this->v[vX][vY][vZ].a == 0) {
                            arquivo << "0.0" << "\n";
                        } else if (this->v[vX][vY][vZ].a == 1) {
                            arquivo << "1.0" << "\n";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].a << "\n";
                        }

                        arquivo << "4 " << (1 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (2 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (6 + (qtd_blocs - 1) * 8) << " ";
                        arquivo << (5 + (qtd_blocs - 1) * 8) << " ";
                        if (this->v[vX][vY][vZ].r == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].r == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].r << " ";
                        }
                        if (this->v[vX][vY][vZ].g == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].g == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].g << " ";
                        }
                        if (this->v[vX][vY][vZ].b == 0) {
                            arquivo << "0.0" << " ";
                        } else if (this->v[vX][vY][vZ].b == 1) {
                            arquivo << "1.0" << " ";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].b << " ";
                        }
                        if (this->v[vX][vY][vZ].a == 0) {
                            arquivo << "0.0" << "\n";
                        } else if (this->v[vX][vY][vZ].a == 1) {
                            arquivo << "1.0" << "\n";
                        }
                         else {
                            arquivo << this->v[vX][vY][vZ].a << "\n";
                        }

                        qtd_blocs++;

                    }
                }
            }
        }

        arquivo.close();
        cout << "Arquivo criado!";
    } else {
        cout << "Falha ao tentar abrir arquivo\n";
    }
}
