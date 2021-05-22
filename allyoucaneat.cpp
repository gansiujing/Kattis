#include<stdio.h>

long long int t, n,m,happy[20], weight[20];
long long int min=1e12;
void yolo(long long int idx,long long int h,long long int w)
{
	if(idx==n)
	{
		if(h>=m)
		{
			if(w<min) min = w;
		}
	}
	else
	{
		yolo(idx+1, h + happy[idx], w + weight[idx]);
		yolo(idx+1, h, w);
		
	}
}

int main()
{
	scanf("%lld", &t);
	for(int i=0;i<t;i++)
	{
		scanf("%lld %lld", &n,&m);
		min = 1e12;
		for(int j=0;j<n;j++)
		{
			scanf("%lld %lld", &happy[j], &weight[j]);
		}
		yolo(0,0,0);
		
		printf("Case #%d: ", i+1);
		if(min==1e12)
		{
			printf("Impossible\n");
		}
		else{
			printf("%lld\n", min);
		}
	}
}	

