#include <stdio.h>
int main()
{
    int n;
    printf("enter your choice:\n");
    printf("1.size of ineger\n");
    printf("2.size of float\n");
    printf("3.size of double\n");
    printf("4.size of character\n");
    scanf("%d",&n);
    switch(n)
	{
		case 1:
		{
			int x;
    		printf("%d ", sizeof(x));
    		break;
    	}
    	case 2:
    		{
    			float x;
    			printf("%d ", sizeof(x));
    			break;
			}
		case 3:
			{
				double x;
				printf("%d ", sizeof(x));
				break;
			}
		case 4:
			{
				char x;
				printf("%d ", sizeof(x));
				break;
			}
	}
    return 0;
}
