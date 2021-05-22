#include<stdio.h>
int main()
{
	int N, j, l,n;
	int flag=0;
	scanf("%d", &N);
	for(j=0;j<=N;j++)
	{
		for(l=0;l<=N;l++)
		{
			for(n=0;n<=N;n++)
			{
				if(j+l+n==N) flag++;
			}
		}
	}
	printf("%d\n", flag);
	return 0;
}
