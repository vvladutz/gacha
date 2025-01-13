#include "Produs.h"
#include <utility>
#include <iostream>

Produs::Produs(std::string nume, double pret) : nume(std::move(nume)), pret(pret) {}
