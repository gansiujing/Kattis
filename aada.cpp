#include<stdio.h>

int main()
{
	int array[100];
	int x;
	int n;
	scanf("%d", &n);
	//input array
	for(int i=0;i<n;i++)
	{
		scanf("%d", &array[i]);
	}
	scanf("%d", &x);
	for(int i=0;i<n;i++)
	{
		if(array[i]==x)
		{
			printf("Found!\n");
			return i;
		}
	}
	printf("Not found!\n");
	return -1;
}
