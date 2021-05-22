#include<stdio.h>
#include<string.h>


struct youtube{
	char title[100];
	int viewers;
}utube[11000];

void sort(struct youtube utube[], int n)
{
	struct youtube temp;
	for(int i=0;i<n;i++)
	{
		for(int j=n-1;j>i;j--)
		{
			if(strcmp(utube[j-1].title,utube[j].title)>0)
			{
				temp= utube[j-1];
				utube[j-1]=utube[j];
				utube[j]=temp;
			}
			if(utube[j-1].viewers>utube[j].viewers)
			{
				temp= utube[j-1];
				utube[j-1]=utube[j];
				utube[j]=temp;
			}
		}
	}
}
/* 
5
abcd 303
aaa 303
fuah 299
ffje 800
adjas 299
*/
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s %d",&utube[i].title, &utube[i].viewers);
//		printf("%s %d\n", utube[i].title, utube[i].viewers);
	}
	
	sort(utube, n);
	
	for(int i=0;i<n;i++)
	{
		printf("%s %d\n", utube[i].title, utube[i].viewers);
	}
}
