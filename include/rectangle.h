#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"
class Rectangle:public Shape{
private:
    double height;
    double width;
public:
    void create() override;
    void print() const override;
};

#endif // RECTANGLE_H
