#include <iostream>
#include <ctime>
#include "Lancha.h"

using namespace std;

int main() {
    srand(time(0));

    Lancha lancha1("Corredor 1");
    Lancha lancha2("Corredor 2");

    cout << "Ahora presenciaremos una carrera entre dos lanchas dirigidas por los dos mejores pilotos del mundo" << "\n";
    cout << "Por un lado observamos con su caracteristica tranquilidad al "<< lancha1.getCorredor() << "\n";
    cout << "Y a su lado podemos ver con gran motivacion al " << lancha2.getCorredor() << "\n";
    cout << "\n";


    for (int i = 0; i < 5; ++i) {
        lancha1.lanzarDado();
        lancha1.usarNitro();
        lancha1.avanzar();
        cout << "El " << lancha1.getCorredor() << " hace una distancia de " << lancha1.getDistancia() << " con su lancha" << "\n";

        lancha2.lanzarDado();
        lancha2.usarNitro();
        lancha2.avanzar();
        cout << "El " << lancha2.getCorredor() << " hace una distancia de " << lancha2.getDistancia() << " con su lancha" << "\n";
    }

    cout << "\n";

    if (lancha1.getDistancia() > lancha2.getDistancia()) {
        cout << "El " << lancha1.getCorredor() << " es el que ha logrado llegar mas lejos con su lancha, por lo tanto se lleva la victoria!\n";
    }
    else if (lancha1.getDistancia() < lancha2.getDistancia()) {
        cout << "El " << lancha2.getCorredor() << " es el que ha logrado llegar mas lejos con su lancha, por lo tanto se lleva la victoria!\n";
    }
    else {
        cout << "No puede ser, los dos han llegado a la vez a la meta, damas y caballeros, esto ha acabado en empate!\n";
    }

    return 0;
}
