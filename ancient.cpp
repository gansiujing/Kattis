#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,n,a,b;
	scanf("%lld", &t);
	long long int ctr1 , ctr2;
	for(int i=1;i<=t;i++)
	{
		scanf("%lld %lld", &a, &b);
		ctr1=1;
		ctr2=1;
		long long int lon=1000000007;
		while(a>10)
		{
			ctr1=ctr1*pow(2,10);
			a=a-10;
			ctr1=ctr1%lon;
		}
		ctr1=ctr1*pow(2,a);
		ctr1=ctr1%lon;
		while(b>10)
		{
			ctr2=ctr2*pow(3,10);
			b=b-10;
			ctr2=ctr2%lon;
		}
		ctr2=ctr2*pow(3,b);
		ctr2=ctr2%lon;
  		printf("%lld\n", (ctr1*ctr2)%lon);
	}
	return 0;
}
