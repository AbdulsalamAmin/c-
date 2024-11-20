#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
class Circle:public Shape{
private:
    double radius;
public:
    void create() override;
    void print() const override;
};

#endif // CIRCLE_H
