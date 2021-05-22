#include<stdio.h>
int main()
{
	int t, n, a[100005],m;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		scanf("%d", &n);
		for(int j=0;j<n;j++)
		{
			scanf("%d", &a[j]);
		}
		scanf("%d", &m);
		long long int total=0,max=0,size=0;
		long long int temp=0,f=0;
		for(int j=0;j<n;j++)
		{
			total+=a[j];
			temp+=total;
			size++;
			while(temp>m){
				total-=a[f];
				temp-=(size*a[f]);
				size--;
				f++;
			}
			if(max<temp&&temp<=m)
			{
				max=temp;
			}
		}
		
		printf("Case #%d: %d\n",i+1,max);
	}
}

