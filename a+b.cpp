#include<stdio.h>
int main()
{
	int a=0,b=0;
	FILE *f=fopen("testdata.in", "r");
	fscanf(f, "%d %d", &a, &b);
	printf("%d\n", a+b);
	fclose(f);
	return 0;
}
