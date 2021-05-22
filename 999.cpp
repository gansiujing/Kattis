#include<stdio.h>
int main()
{
	int x1,x2,x3;
	scanf("%d %d %d", &x1,&x2,&x3);
	if(x1%111==0)
	{
		printf("%.1f...\n", 0.1*(x1%10));
	}
	else{
		printf("%.3f...\n", 0.001*x1);	
	}
		if(x2%111==0)
	{
		printf("%.1f...\n", 0.001*x2);
	}
	else{
		printf("%.3f...\n", 0.001*x2);	
	}
		if(x3%111==0)
	{
		printf("%.1f...\n", 0.001*x3);
	}
	else{
		printf("%.3f...\n", 0.001*x1);	
	}
	

	return 0;
}
