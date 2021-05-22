#include<stdio.h>
int main()
{
	int arr[105];
	int i=0;
	while(scanf("%d", &arr[i])!=EOF)
	{
		i++;
		continue;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
