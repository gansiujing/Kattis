#include<stdio.h>
#include<string.h>
int main()
{
	char s[1001];
	scanf("%[^\n]", &s);
	int len= strlen(s);
	for(int i=0;i<len;i++)
	{
		if(s[i]<=65) s[i]+=60;
		else s[i]-=34;
	}
	printf("%s\n", s);
	return 0;
}
