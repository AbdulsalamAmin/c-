#ifndef SQUARE_H
#define SQUARE_H
#include "shape.h"
class Square:public Shape{
private:
    double side;
public:
    void create() override;
    void print()const override;
};

#endif // SQUARE_H
