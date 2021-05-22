#include<stdio.h>
#include<string.h>
int main()
{
	int T,N,len;
	char str[101];
	int unique[30];
	char A[30],B[30];
	int cek[30];
	FILE *f;
	f = fopen("testdata.in", "r");
	fscanf(f, "%d", &T);
	fgetc(f);
	for(int i=0;i<T;i++)
	{
		fscanf(f, "%s", str);
		fgetc(f);
		len = strlen(str);
		fscanf(f, "%d", &N);
		fgetc(f);
		for(int j=0;j<30;j++)
		{
			cek[j]=0;
		}
		for(int j=0;j<N;j++)
		{
			fscanf(f, "%c %c", &A[j],&B[j]);
			fgetc(f);
//			printf("%c\n", A[j]);
			int a=A[j]-'A';
//			printf("a : %d\n",a);
			if(cek[a]==0)
			{
				for(int k=0;k<len;k++)
				{
					if(str[k]==A[j]) str[k]=B[j];
					else{
						
					}
				}
				cek[a]=1;
			}
			else{
				
			}
		}
		for(int j=0;j<30;j++)
		{
			unique[j]=0;
		}
		for(int j=0;j<len;j++)
		{
			int a = str[j]-'A';
			unique[a]++;
		}
		for(int j=0;j<26;j++)
		{
			if(unique[j]>0)
			{
				printf("%c %d\n", j+65, unique[j]);
			}
		}
//		printf("%s\n", str);
	}
}
