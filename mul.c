#include<stdio.h>
int mul(int x)
{
    return x * 9;
}
int main()
{
	int x,y;
	printf("enter the no:");
	scanf("%d",&x);
	 y=mul (x);
	 printf("%d",y);
}
