#ifndef LANCHA_H
#define LANCHA_H

#include <string>
using namespace std;

class Lancha {
    string corredor;
    int velocidad;
    int distancia;
    bool nitro;

public:
    Lancha(string c);

    void lanzarDado();
    void usarNitro();
    void avanzar();

    int getDistancia();
    string getCorredor();
};

#endif // LANCHA_H
