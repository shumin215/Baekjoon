#include "turret.h"

int main()
{
    int x1, y1, x2, y2;
    float r1, r2;
    int number;

    scanf("%d", &number);

    for(int i=0; i<number; i++)
    {
        scanf("%d", &x1);
        scanf("%d", &y1);
        scanf("%f", &r1);
        scanf("%d", &x2);
        scanf("%d", &y2);
        scanf("%f", &r2);

        Turret tur(x1, y1, x2, y2, r1, r2);

        tur.calDistance();

        tur.checkPosition();
    }
    
    return 0;
}
