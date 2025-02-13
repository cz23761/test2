#include "disk.h"
#include <cmath>

Disk::Disk(double x, double y, double r){
    this->x = x;
    this->y = y;
    this->radius = r;
}

void Disk::move(double dx, double dy){
    this->x += dx;
    this->y += dy;
}

double Disk::distance(Disk& other){
    double x_dist = this->x - other.x;
    double y_dist = this->y - other.y;

    return std::sqrt(x_dist * x_dist + y_dist * y_dist);
}