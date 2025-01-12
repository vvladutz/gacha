#ifndef PRODUS_H
#define PRODUS_H
#include <string>
#include <utility>

class Produs {
protected:
    float pret;
public:
    explicit Produs(float _pret);
    virtual ~Produs() = default;

    virtual void display() = 0;
    virtual void aplicaDiscount() = 0;
};

#endif //PRODUS_H