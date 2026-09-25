#include "aleatorio.h"

static std::random_device rd;
std::mt19937 gen(rd());
std::uniform_int_distribution<> dist(65, 90);

int ObtenerAleatorio() {
    int auxFicha = dist(gen);
    return auxFicha;
}