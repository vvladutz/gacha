#ifndef TELEFON_H
#define TELEFON_H
#include <string>
#include "Produs.h"

class Telefon : public Produs {
private:
    std::string firma;
    int memorie;
public:
    Telefon(const std::string &nume, double pret, std::string firma, int memorie);
    ~Telefon() override;

    friend std::ostream& operator<<(std::ostream& os, const Telefon& t);
};

#endif //TELEFON_H
