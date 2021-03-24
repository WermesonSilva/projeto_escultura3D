#include <iostream>
#include "classe_Sculptor.h"
using namespace std;

int main(void) {
    char *nome_arquivo;
    nome_arquivo = new char[100];
    nome_arquivo = "C:\\Users\\swerm\\Desktop\\arq_off\\projeto_casa004.off";
    Sculptor Escultor(400, 400, 400);

    //CASA
    Escultor.setColor(1, 1, 1, 1);
    Escultor.putBox(0, 59, 0, 59, 18, 35);
    Escultor.cutBox(48, 59, 30, 59, 18, 35);

    //batente
    Escultor.putBox(48, 58, 30, 33, 18, 18);
    Escultor.putBox(49, 57, 30, 32, 19, 19);
    Escultor.putBox(50, 56, 30, 31, 20, 20);

    //sala
    Escultor.cutBox(34, 58, 1, 28, 20, 35);

    //cozinha
    Escultor.cutBox(1, 32, 1, 28, 20, 35);

    //quarto 1
    Escultor.cutBox(31, 46, 30, 58, 20, 35);

    //quarto 2
    Escultor.cutBox(1, 14, 30, 58, 20, 35);

    //banheiro
    Escultor.cutBox(16, 29, 29, 35, 20, 35);
    Escultor.cutBox(16, 29, 37, 58, 20, 35);

    //area externa
    Escultor.putBox(69, 70, 0, 1, 19, 32);
    Escultor.putBox(69, 70, 29, 30, 19, 32);
    Escultor.putBox(69, 70, 58, 59, 19, 32);
    Escultor.putBox(0, 70, 0, 59, 18, 18);
    Escultor.putBox(60, 68, 0, 0, 19, 22);
    Escultor.putBox(70, 70, 2, 57, 19, 22);

    //portas
    Escultor.setColor(0.58, 0.32, 0.18, 1);

    Escultor.cutBox(33, 33, 1, 19, 27, 35);
    Escultor.cutBox(33, 33, 19, 28, 20, 35);

    Escultor.putBox(30, 30, 31, 34, 20, 30);

    Escultor.putBox(15, 15, 31, 34, 20, 30);

    Escultor.putBox(21, 24, 36, 36, 20, 30);

    Escultor.putBox(51, 55, 29, 29, 20, 30);

    Escultor.putBox(0, 0, 18, 21, 20, 30);

    //janelas
    Escultor.setColor(0, 1, 1, 0.2);

    Escultor.putBox(59, 59, 11, 16, 25, 30);

    Escultor.putBox(0, 0, 6, 11,  25, 30);

    Escultor.putBox(5, 10, 59, 59,  25, 30);

    Escultor.putBox(21, 23, 59, 59,  31, 32);

    Escultor.putBox(37, 42, 59, 59,  25, 30);


    //TERRENO
    Escultor.setColor(0, 0.98, 0.6, 1);
    Escultor.putBox(0, 149, 0, 149, 0, 17);
    Escultor.cutBox(1, 148, 1, 148, 1, 16);

    //teto
    Escultor.setColor(1, 0.55, 0, 0.3);
    Escultor.putBox(0, 60, 0, 60, 36, 45);
    Escultor.cutBox(50, 60, 31, 60, 36, 45);

    for (int x = 0; x < 10; x++) {
        Escultor.cutBox((58 - 3*x), (60 - 3*x), 0, 60, (37 + x), 45);
    }
    for (int x = 0; x < 6; x++) {
        Escultor.cutBox((47 - 2*x), (48 - 2*x), 31, 60, (37 + 2*x), 45);
    }
    Escultor.cutBox(49, 49, 31, 60, 37, 45);
    for (int x = 0; x < 10; x++) {
        Escultor.cutBox((0 + 3*x), (2 + 3*x), 0, 60, (37 + x), 45);
    }
    for (int x = 0; x < 10; x++) {
        Escultor.cutBox(0, 60, (58 - 3*x), (60 - 3*x), (37 + x), 45);
    }
    for (int x = 0; x < 10; x++) {
        Escultor.cutBox(0, 60, (0 + 3*x), (2 + 3*x), (37 + x), 45);
    }

    Escultor.putBox(60, 70, 0, 30, 32, 34);
    for (int x = 0; x < 2; x++) {
        Escultor.cutBox((68 - 3*x), (70 - 3*x), 0, 30, (33 + x), 45);
    }
    Escultor.putBox(48, 70, 31, 60, 32, 34);
    for (int x = 0; x < 2; x++) {
        Escultor.cutBox((64 - 7*x), (70 - 7*x), 31, 60, (33 + x), 45);
    }

    //ARVORE
    Escultor.setColor(0.545, 0.27, 0.074, 1);
    for(int x = 0; x < 7; x++) {
        Escultor.putBox((18 + x), (28 - x), (110 + x), (120 - x), (18 + 4*x), (21 + 4*x));
    }
    Escultor.setColor(0, 1, 0, 1);
    Escultor.putSphere(23, 115, 52, 15);
    Escultor.putSphere(30, 125, 60, 6);
    Escultor.putSphere(33, 105, 52, 8);

    Escultor.putSphere(33, 105, 52, 7);
    Escultor.putSphere(30, 125, 60, 5);
    Escultor.cutSphere(23, 115, 52, 14);

    Escultor.setColor(1, 0, 0, 1);
    Escultor.putVoxel(38, 115, 52);
    Escultor.putVoxel(33, 97, 52);
    Escultor.putVoxel(41, 105, 52);
    Escultor.putVoxel(36, 125, 60);
    Escultor.putVoxel(30, 125, 66);
    Escultor.putVoxel(23, 115, 67);
    Escultor.putVoxel(23, 100, 52);

    //PISCINA
    Escultor.setColor(0.5, 0.5, 0.5, 1);
    Escultor.putEllipsoid(115, 90, 17, 20, 30, 15);
    Escultor.setColor(0.255, 0.412, 0.882, 0.3);
    Escultor.putEllipsoid(115, 90, 17, 19, 29, 14);
    Escultor.cutBox(95, 149, 60, 120, 19, 32);

    //CACHORRO
    //patas
    Escultor.setColor(0.855, 0.647, 0.125, 1);
    Escultor.putBox(70, 70, 90, 90, 18, 21);
    Escultor.putBox(68, 68, 90, 90, 18, 21);
    Escultor.putBox(70, 70, 93, 93, 18, 21);
    Escultor.putBox(68, 68, 93, 93, 18, 21);
    //corpo
    Escultor.putBox(69, 69, 90, 93, 21, 22);
    //cabeça
    Escultor.putBox(68, 70, 89, 89, 23, 23);
    Escultor.putVoxel(69, 88, 23);
    Escultor.putVoxel(71, 90, 24);
    Escultor.putVoxel(67, 90, 24);
    //rabo
    Escultor.putVoxel(69, 94, 23);


    Escultor.writeOFF(nome_arquivo);

    delete [] nome_arquivo;
    return 0;
}
