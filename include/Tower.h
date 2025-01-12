#ifndef TOWER_H
#define TOWER_H
#include <string>
#include <utility>

class Tower {
protected:
    int id;
    int damage{};
public:
    explicit Tower(int _id, int _damage);
    virtual ~Tower() = default;

    virtual void upgrade() = 0;
    virtual void display() = 0;
};

#endif //TOWER_H