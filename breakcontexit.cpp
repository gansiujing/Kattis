#include<stdio.h>
int main()
{
	int a;
	scanf("%d", &a);
	for(int i=1;i<=a;i++)
	{
		if(i%10==0)continue;
		if(i==42) {
		printf("ERROR\n");
		break;
		}
		else printf("%d\n", i);
	}
	return 0;
}
