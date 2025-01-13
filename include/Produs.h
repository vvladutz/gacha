#ifndef PRODUS_H
#define PRODUS_H
#include <string>

class Produs {
protected:
    std::string nume;
    double pret;
public:
    explicit Produs(std::string nume, double pret);
    virtual ~Produs() = default;
};

#endif //PRODUS_H