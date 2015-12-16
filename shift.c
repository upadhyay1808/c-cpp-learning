#include <stdio.h>

int main(void)
{
    char c = 123;
    c <<= 8;
    printf("%d\n", c); //Should print 0
    c = 123;
    c <<= 16;
    printf("%d\n", c); //Should also print 0
    int i = 234;
    i <<= 32;
    printf("%d\n", i); //Should print 234
    return 0;
}

