#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a[5];
    double b;
} foo;


int main()
{
    foo* myfoo = (foo *)malloc(sizeof(foo));
    myfoo->b = 1.2;
    myfoo->a[5] = 20;
    printf("%f\n", myfoo->b);
    return 0;
}
