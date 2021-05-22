#include<stdio.h>
#include<string.h>
#include<ctype.h>
//• I = 1
//• R = 2
//• E = 3
//• A = 4
//• S = 5
//• G = 6
//• T = 7
//• B = 8
//• P = 9
//• O = 0
int main()
{
	char s[10000];
	scanf("%[^\n]", &s);
	int i,str,j;
	str=strlen(s);
	for(i=0;i<str;i++){
		if(islower(s[i])) s[i]=toupper(s[i]);
		for(j=0;j<str;j++){
			if(s[j]=='I') {s[j]='1';}
			if(s[j]=='R') {s[j]='2';}
			if(s[j]=='E') {s[j]='3';}
			if(s[j]=='A') {s[j]='4';}
			if(s[j]=='S') {s[j]='5';}
			if(s[j]=='G') {s[j]='6';}
			if(s[j]=='T') {s[j]='7';}
			if(s[j]=='B') {s[j]='8';}
			if(s[j]=='P') {s[j]='9';}
			if(s[j]=='O') {s[j]='0';}
		}
	}
	printf("%s\n", s);
	return 0;
}
