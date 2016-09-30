

#include "Foursquare.hpp"
#include <cmath>



Foursquare::Foursquare() {
}

Foursquare::Foursquare(int i) {
    a = i;
    std::cout << "Square with side " << a << " created" << std::endl;
}

Foursquare::Foursquare(std::istream &is) {
    std::cout << "Input side a:" << std::endl;
    is >> a;
}

double Foursquare::Square() {
    double res = a * a ;
    return res;
}

void Foursquare::Print() {
    std::cout << "Figure: Foursquare \nside = " << a << std::endl;
}