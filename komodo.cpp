#include<stdio.h>

int ctr=0;
void komodo(char inp[105][105], int x, int y, int m, int n)
{
	if(inp[x][y]=='K')
	{
		ctr++;
		inp[x][y]='S';
	}
//	if(inp[x][y]=='H')
//	{
	inp[x][y]='F';
		if(inp[x][y+1] !='S' && inp[x][y+1]!='F')
		{
			if(y<=n)
			{
				komodo(inp,x, y+1, m, n);
			}
		}
		if(inp[x][y-1] != 'S' && inp[x][y-1] != 'F' )
		{
			if(y>=1)
			{
				komodo(inp, x, y-1, m, n);
			}
		}
		if(inp[x+1][y] !='S' && inp[x+1][y] !='F')
		{
			if(x<=m)
			{
				komodo(inp, x+1, y, m,n);
			}
		}
		if(inp[x-1][y] !='S' && inp[x-1][y] !='F')
		{
			if(x>=1)
			{
				komodo(inp, x-1, y, m,n);
			}
		}
//	}
}

int main()
{
	int t, n, m;
	int x, y;
	scanf("%d", &t);
	char inp[105][105];
	for(int i=0;i<t;i++)
	{
		ctr=0;
		x=0,y=0;
		for(int j=0;j<105;j++)
		{
			for(int k=0;k<105;k++)
			{
				inp[j][k]='S';
			}
		}
		scanf("%d %d", &m, &n);
		getchar();
		int k;
		for(int j=1;j<=m;j++)
		{
			for( k=1;k<=n;k++)
			{
				scanf("%c", &inp[j][k]);
			}
			getchar();
			inp[j][k+1]='\0';
		}

//		printf("asdf");
		
//		puts("");
//		for(int j=1;j<=m;j++)
//		{
//			printf("%d %s\n", j, inp[j]);
//		}
		for(int j=1;j<=m;j++)
		{
			for(int k=1;k<=n;k++)
			{
				if(inp[j][k]=='H')
				{
					x = j;
					y = k;
//					printf("hs\n");
					break;
				}
			}
			if(x!=0 && y!=0) break;
		}
//		printf("x %d y %d\n", x, y);
		komodo(inp, x, y, m,n);
		printf("Case #%d: %d\n", i+1, ctr);
		
	}
}


