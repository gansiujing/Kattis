#include<stdio.h>
#include<string.h>
int main()
{
	char s[105];
	char rev[105]="";
	scanf("%s", s);
	int len=strlen(s);
	printf("%d\n", len);
	for(int i=0;i<len;i++)
	{
		rev[i]=s[len-1-i];
	}
	printf("%s\n", rev);
	if(strcmp(s,rev)==0)
	printf("PALINDROM\n");
	else
	printf("BUKAN PALINDROM\n");
	
	
	return 0;
}
