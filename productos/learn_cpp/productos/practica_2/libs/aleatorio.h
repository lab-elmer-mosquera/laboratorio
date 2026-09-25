#pragma once

#include <random>

extern std::mt19937 gGenerador;
extern std::uniform_int_distribution<int> gDistFicha;

int ObtenerAleatorio();