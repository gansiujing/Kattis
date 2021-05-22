#include<stdio.h>
int main()
{
	long long int a,b,c,d,e,f;
	scanf("%lld %lld %lld %lld", &a,&b,&c,&d);
	e=a*b;
	f=c+d;
	if(e>=f){
		printf("True\n");
	}
	else{
		printf("False\n");
	}
	
	
	return 0;
}
