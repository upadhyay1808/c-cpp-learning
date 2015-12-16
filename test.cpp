#include <stdio.h>

int main(int argc, char **argv)
{
    int x = 100;
    printf("%d and ", sizeof(x));//The "sizeof()" is executed in compile-time
    printf("%d\n", x);
    return 0;
}
