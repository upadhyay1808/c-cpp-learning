#include <stdio.h>

int main()
{
    int *intptr = NULL;
    float *floatptr = NULL;
    char *charptr = NULL;
    printf("\nSize of Int Pointer   : %d Bytes",sizeof(intptr));
    printf("\nSize of Char Pointer : %d Bytes",sizeof(charptr));
    printf("\nSize of Float Pointer     : %d Bytes",sizeof(floatptr));
    return 0;
}
