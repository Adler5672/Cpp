#include "oval.h"

Oval::Oval(const double &x_radius, const double &y_radius, std::string_view description) : Shape(description), x_radius(x_radius), y_radius(y_radius){}
