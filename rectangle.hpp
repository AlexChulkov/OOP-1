
#ifndef rectangle_hpp
#define rectangle_hpp

#include "figure.hpp"
#include <cstdlib>
#include <iostream>

class Rectangle: public Figure {
public:
    Rectangle();
    Rectangle(std::istream &is);
    Rectangle(size_t i, size_t j);
    Rectangle(const Rectangle& orig);
    
    
    double Square() override;
    void Print() override;
private:
    size_t side_a;
    size_t side_b;
};
#endif

