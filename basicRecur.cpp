#include<stdio.h>

int func(int x)
{
	if(x<=4)
	{
		return x;
	}
	else
	{
		return func((x/5) + (x%5)) + (x/5);
	}
}

int main()
{
	int T;
	int x;
	
	scanf("%d", &T);
	for(int i=1;i<=T;i++)
	{
		scanf("%d", &x);
		printf("Case #%d: %d\n", i, func(x));
		
	}
}
