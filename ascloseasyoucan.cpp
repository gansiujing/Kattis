#include<stdio.h>
int main()
{
	long long int N, Q[200000],A,M;
	scanf("%lld", &N);
	for(int i=1;i<=N;i++)
	{
		scanf("%lld",&Q[i]);
	}
	scanf("%lld", &A);
	for(int i=0;i<A;i++)
	{
		scanf("%lld", &M);
		long long int total=0;
		int j;
		for(j=1;j<=N;j++)
		{
			if(total+Q[j]>M)
			{
				break;
			}
			total+=Q[j];
		}
		if(M<Q[1])
		{
			j=0;
		}
		printf("Case #%d: %d\n", i+1,j-1);
	}
}
