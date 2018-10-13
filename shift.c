#include <stdio.h>
int main()
{
    int x,n,s;
    printf("choose the shift operation you want to perform:");
    scanf("%d",&n);
    printf("enter the number:");
    scanf("%d",&x);
    printf("enter the no of bits you want to shift");
    scanf("%d",&s);
    switch(n)
    {
		case 1:
    	{
			printf("left shift operarion will give:");
			printf("%d\n",x<<s);
			break;
		}
		case 2:
		{
			printf("right shift operarion will give:");
			printf("%d\n",x>>s);
			break;
		}
	}
    return 0;
}

