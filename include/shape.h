#ifndef SHAPE_H
#define SHAPE_H

// Base class Shape
class Shape {
public:
    virtual void create() = 0;
    virtual void print() const = 0;
    virtual ~Shape() {}
};
#endif //SHAPE_H
