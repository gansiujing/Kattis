#include<stdio.h>
int main()
{
	int t, n,naik,turun,a[100005];
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		scanf("%d %d %d", &n, &naik, &turun);
		int up=0,down=0;
		for(int j=0;j<n;j++)
		{
			scanf("%d", &a[j]);
		}
		int j;
		int cek [100005]={0};
		int idx=0;
		int yolo=0;
		printf("Case #%d: ", i+1);
		if(naik==0 && turun==0)
		{
			printf("1\n");
		}
		else{
			for(j=0;j<n-1;)
			{
				if(a[j]>a[j+1])
				{
					down++;
					cek[j]=-1;
				}
				else if(a[j]<a[j+1])
				{
					up++;
					cek[j]=1;
				}
				else
				{
					cek[j]=0;
				}
				while((up>naik || down>turun)&&yolo<=j)
				{
					if(cek[yolo]==-1)
					{
						down--;
					}
					else if(cek[yolo]==1)
					{
						up--;
					}
					yolo++;
				}
				if(up==naik && down==turun)
				{
					break;
				}
				j++;
			}
			if(up==naik && down==turun)	
			{
				printf("%d\n", j-yolo+2);
			}
			else{
				printf("-1\n");
			}
		}
	}
}
