#include<stdio.h>
int main()
{
	int angka[50];
	int toggle[50];
	for(int i=0;i<50;i++)
	{
		toggle[i]=0;
	}
	int n;
	scanf("%d", &n);
	for(int i=0;i<n;i++)
	{
		scanf("%d", &angka[i]);
	}
	int gone,hilang[10];
	scanf("%d", &gone);
	for(int i=0;i<gone;i++)
	{
		scanf("%d", &hilang[i]);
		
		for(int j=0;j<n;j++)
		{
			if(hilang[i]==angka[j])
			{
				toggle[j]=1;
			}
		}
	}
	int max=0;
	for(int j=0;j<n;j++)
	{
		if(angka[j]>max && toggle[j]==0)
		{
			max=angka[j];
		}
	}
	printf("max = %d\n", max);
	
}
