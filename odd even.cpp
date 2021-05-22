#include<stdio.h>
#include<string.h>
int main()
{
	int t;
	scanf("%d", &t);
	for(int i=0;i<t;i++)
	{
		char inp[100000]= { }, odd[100000]= { }, even[100000]= { };
		scanf("%s", inp);
		int len= strlen(inp);
		int o=0, e=0;
		for(int i=0;i<len;i++)
		{
			if((i%2)-1 == 0)
			{
				even[e]=inp[i];
				e++;	
			}
			else{
				odd[o]=inp[i];
				o++;
			}
		}
	printf("%s %s\n", odd, even);
	}
}
