#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	//FILE *f= fopen("testdata.in", "r");
	freopen("testdata.in","r",stdin);
	scanf("%d", &t);
	double grand;
	for(int i=0;i<t;i++)
	{
		scanf("%lf\n", &grand);
//		printf("grand %d\n", grand);
		printf("Case #%d: %.lf\n", i+1, pow(grand, (float)1/3));
	}	
}
