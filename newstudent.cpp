#include<stdio.h>
int main()
{
	char nama[101];
	int age;
	char nis[9];
	scanf("%[^\n]", &nama);
	scanf("%s %d", &nis, &age);
	printf("Name: %s\n", nama);
	printf("NIS: %s\n", nis);
	printf("Age: %d\n", age);
	
	return 0;
}
