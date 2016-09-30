

#ifndef Foursquare_hpp
#define Foursquare_hpp

#include "figure.hpp"
#include <cstdlib>
#include <iostream>

class Foursquare: public Figure {
public:
    Foursquare();
    Foursquare(int i);
    Foursquare(std::istream &is);
    
    double Square() override;
    void Print() override;
private:
    size_t a;
};
#endif

