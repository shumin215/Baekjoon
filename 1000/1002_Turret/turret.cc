#include "turret.h"


Turret::Turret(int _x1, int _y1, int _x2, int _y2
        , double _r1, double _r2)
{
    this->x1 = _x1;
    this->y1 = _y1;
    this->x2 = _x2;
    this->y2 = _y2;
    this->r1 = _r1;
    this->r2 = _r2;
}

bool Turret::isSamePoint()
{
    if(this->x1 == this->x2 && this->y1 == this->y2)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void Turret::calDistance(void)
{
    double value1 = pow((this->x1 - this->x2), 2);
    double value2 = pow((this->y1 - this->y2), 2);

    this->distance =  sqrt(value1 + value2);

//    printf("Distance : %f\n", this->distance);
}

void Turret::checkPosition(void)
{
    if(isSamePoint())
    {
        if(this->r1 == this->r2)
        {
            printf("-1\n");
        }
        else
        {
            printf("0\n");
        }
    }
    // Different Point
    else
    {
        // Same point
        if(this->distance == (this->r1 + this->r2))
        {
            printf("1\n");
        }
        else if(this->distance < (this->r1 + this->r2))
        {
            if(this->distance + this->r1 == this->r2
                    || this->distance + this->r2 == this->r1)
            {
                printf("1\n");
            }
            else if(this->r1 > this->r2)
            {
                if(this->r1 > this->r2 + this->distance)
                {
                    printf("0\n");
                }
                else
                {
                    printf("2\n");
                }
            }
            else
            {
                if(this->r2 > this->r1 + this->distance)
                {
                    printf("0\n");
                }
                else
                {
                    printf("2\n");
                }
            }
        }
        // There is no connection
        else
        {
            printf("0\n");
        }
        
    }
}
