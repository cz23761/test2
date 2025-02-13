#ifndef DISK_H
#define DISK_H

class Disk {   
    public:
        Disk(double x, double y, double r);
        double x;
        double y;
        double radius;

        void move(double dx, double dy);
        double distance(Disk& other);
}

#endif