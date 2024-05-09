#include "Lancha.h"
#include <cstdlib>
using namespace std;

Lancha::Lancha(string c) : corredor(c), velocidad(0), distancia(0), nitro(true) {}

void Lancha::lanzarDado() {
    velocidad += rand() % 6 + 1;
}

void Lancha::usarNitro() {
    if (nitro) {
        nitro = false;
        if (rand() % 2 == 0) {
            velocidad /= 2;
        }
        else {
            velocidad *= 2;
        }
    }
}

void Lancha::avanzar() {
    distancia += velocidad * 100;
    velocidad = 0;
}

int Lancha::getDistancia() {
    return distancia;
}

string Lancha::getCorredor() {
    return corredor;
}
