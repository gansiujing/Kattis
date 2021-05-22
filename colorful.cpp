#include<stdio.h>
int main()
{
	int n, a;
	char str[]="abcdefghijklmnopqrstuvwxyz";
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a);
		printf("Case #%d: ", i+1);
		for(int j =0;j<a;j++)
		{
			printf("%c", str[j]);
		}
		printf("\n");
	}
	
	return 0;
}
