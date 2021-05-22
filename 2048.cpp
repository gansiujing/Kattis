#include<stdio.h>

int main()
{
	int arr[5][5];
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
	int clue;
	scanf("%d", &clue);
	
	// 0 = kiri, 1= kanan, 2= kanan, 3= bawah
	int ang, temp;
	switch(clue)
	{
		case 0: 
			{
				for(int i=1;i<5;i++)
				{
					temp = 0; 
					for(int j=1; j<5; j++)
					{
						if(arr[i][j]!=0)
						{
							if(temp!=0 && arr[i][j]==arr[i][temp])
							{
								arr[i][temp]+=arr[i][j];
								arr[i][j]=0;
								temp=0;
							}
							else{
								temp =j;
							}
						}
				
					}
					
					for(int j=1;j<5;j++)
					{
						if(arr[i][j]!=0)
						{
							continue;
						}
						for(int k=j;k<5;k++)
						{
							if(arr[i][k]!=0)
							{
								arr[i][j]=arr[i][k];
								arr[i][k]=0;
								break;
							}
						}
												
					}
				}
			}
		
		case 1:
			{
				 for(int j = 1; j <= 4; j++)
            {
                int temp = 0;
                for(int i = 1; i <= 4; i++)
                {
                    if (arr[i][j] == 0)
                        continue;
                    else
                    {
                        if (temp != 0 && arr[temp][j] == arr[i][j])
                        {
                            arr[temp][j] += arr[i][j];    
                            arr[i][j] = 0;
                            temp = 0;
                        }
                        else
                            temp = i;
                    }
                }

                for(int i = 1; i <= 4; i++)
                {
                    if(arr[i][j] != 0)
                        continue;

                    for(int k = i; k <= 4; k++)
                        if(arr[k][j] != 0)
                        {
                            arr[i][j] = arr[k][j];
                            arr[k][j] = 0;
                            break;
                        }
                }
            }
			}
		case 2:
			{
				for(int i = 4; i >= 1; i--)
            {
                int temp = 0;
                for(int j = 4; j >= 1; j--)
                {
                    if (arr[i][j] != 0)
                    {
                        if (temp != 0 && arr[i][temp] == arr[i][j])
                        {
                            arr[i][temp] += arr[i][j];    
                            arr[i][j] = 0;
                            temp = 0;
                        }
                        else
                            temp = j;
                    }
                }

                for(int j = 4; j >= 1; j--)
                {
                    if(arr[i][j] != 0)
                        continue;

                    for(int k = j; k >= 1; k--)
                        if(arr[i][k] != 0)
                        {
                            arr[i][j] = arr[i][k];
                            arr[i][k] = 0;
                            break;
                        }
                }
            }
			}
		case 3:
			{
				for(int j = 4; j >= 1; j--)
            {
                int temp = 0;
                for(int i = 4; i >= 1; i--)
                {
                    if (arr[i][j] == 0)
                        continue;
                    else
                    {
                        if (temp != 0 && arr[temp][j] == arr[i][j])
                        {
                            arr[temp][j] += arr[i][j];    
                            arr[i][j] = 0;
                            temp = 0;
                        }
                        else
                            temp = i;
                    }
                }

                temp = 0;
                for(int i = 4; i >= 1; i--)
                {
                    if(arr[i][j] != 0)
                        continue;

                    for(int k = i; k >= 1; k--)
                        if(arr[k][j] != 0)
                        {
                            arr[i][j] = arr[k][j];
                            arr[k][j] = 0;
                            break;
                        }
                }
            }
			}
		
	} 
	
	for(int i=1;i<=4;i++)
	{
		for(int j=1;j<=4;j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
