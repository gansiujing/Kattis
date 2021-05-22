 #include<stdio.h>
 #include<string.h>
 int main()
 {
 	char inp[1001];
 	char out[1001];
 	int i, o;
 	scanf("%s", inp);
 	scanf("%s",out);
 	i=strlen(inp);
 	o=strlen(out);
 	if(i<o){
 		printf("no\n");
	 }
	 else{
	 	printf("go\n");
	 }
	 
	 return 0;
 }
