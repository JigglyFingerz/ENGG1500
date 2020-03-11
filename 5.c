#include <stdio.h>
#include <stdlib.h>
//Lab 2 - Task 2
main()
{
    float mean, var;
    float x1, x2, x3, x4;
    scanf("%f %f %f %f", &x1, &x2, &x3, &x4);
    mean = (1.0/4.0)*(x1 + x2 + x3 + x4);
    printf("%f \n", mean);
    var = (1.0/3.0)*((x1-mean)*(x1-mean)+(x2-mean)*(x2-mean)+(x3-mean)*(x3-mean)+(x4-mean)*(x4-mean));
    printf("%f \n", var);
}
