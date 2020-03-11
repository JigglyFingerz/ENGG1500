#include <stdio.h>
#include <stdlib.h>
//Lab 2 - Task 4
int main()
{
    int a, b, q, r;
    scanf("%d %d", &a, &b);
    if(b==0) {
        printf("Division by zero error ");
    }
    else {
    q = a/b;
    r = a%b;

    printf("'a' divided by 'b' is %d\n", q);
    printf("and the remainder is %d", r);
    }
}
