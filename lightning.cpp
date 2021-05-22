#include<stdio.h>
char str[20000];
int petir[20000];
int main()
{
	int T, N, A,B,sum;
	int cek;
	FILE *f;
	f = fopen("testdata.in", "r");
	fscanf(f, "%d", &T);
	fgetc(f);
	for(int i=0;i<T;i++)
	{
		fscanf(f, "%d %d %d", &N, &A,&B);
		fgetc(f);
		fscanf(f, "%[^\n]", str);
		fgetc(f);
		for(int j=0;j<11000;j++)
		{
			petir[j]=0;
		}
		for(int j=0;j<N;j++)
		{
			if(str[j]=='1')
			{
				petir[j]=1;
			}
		}
		cek =0;
		for(int j=0;j<N+1;j++)
		{
			if(petir[j]==1)
			{
				sum+=1;
			}
			if(petir[j]==0)
			{
				if(sum>=A && sum<=B)
				{
					cek+=1;
				}
				sum=0;
			}
		}
		printf("Case #%d: %d\n", i+1, cek);
		cek=0;
		sum=0;
	}
	fclose(f);
	return 0;
}
//#include <stdio.h>
//
//int main(){
//	FILE *fp=fopen("testdata.in","r");
//	int t;
//	fscanf(fp,"%d\n",&t);
//	
//	for (int T=0;T<t;T++){
//		int min=0,max=0,total=0;
//		char str[20000];
//		fscanf(fp,"%d %d %d\n",&total,&min,&max);
//		fscanf(fp,"%[^\n]",str);
//		fgetc(fp);
//		
//		int counter=0,length=0;
//		for(int i=0;i<total;i++){
//			if (str[i]=='1'){
//				length++;
//			}
//			else if(str[i]=='0'){
//				if(length>=min && length<=max)counter++;
//				length=0;
//			}
//		}
//		
//		printf("Case #%d: %d\n",T+1,counter);
//	}
//	fclose(fp);
//	
//	return 0;
//}
