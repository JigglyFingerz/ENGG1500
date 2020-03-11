#include <stdio.h>
#include <stdlib.h>
int main(){
    float x1, y1, x2, y2;
    float x, y;

    printf("Enter Points: ");
    scanf("%f %f %f %f %f", &x, &x1, &y1, &x2, &y2);

    y = (y2 - y1)/(x2 - x1)*(x - x1) + y1;
    printf("%f\n", y);
    return 0;

}
