#include "Telefon.h"

#include <ostream>
#include <utility>

Telefon::Telefon(const std::string &nume, double pret, std::string firma, int memorie) : Produs(nume, pret), firma(std::move(firma)), memorie(memorie) {}

std::ostream& operator<<(std::ostream& os, const Telefon& telefon) {
    os << "TELEFON: " << telefon.nume << std::endl;
    os << "FIRMA: " << telefon.firma << std::endl;
    os << "PRET: " << telefon.pret << std::endl;
    os << "MEMORIE: " << telefon.memorie << std::endl;
    return os;
}

