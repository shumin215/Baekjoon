#ifndef _TURRET_H_
#define _TURRET_H_

#include <cstdio>
#include <iostream>
#include <math.h>

using namespace std;

class Turret
{
public:
    Turret(int _x1, int _y1, int _x2, int _y2
        , double _r1, double _r2);
    void calDistance(void);
    void checkPosition(void);
    bool isSamePoint();

private:
    int x1, y1, x2, y2;
    double r1, r2, distance;
};

#endif
