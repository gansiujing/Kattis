#include<stdio.h>

void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int sum1 = m - l + 1; 
    int sum2 =  r - m; 
  
    int L[sum1], R[sum2]; 
  
    for (i = 0; i < sum1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < sum2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    i = 0; 
    j = 0; 
    k = l; 
    while (i < sum1 && j < sum2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    while (i < sum1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    while (j < sum2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  


void mergeSort(int arr[], int l, int r)
{
	if(l<r)
	{
		int m= l + (r-l) /2;
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		
		merge(arr, l,m,r);
	}
}


int main()
{
	
	int t, n, m;
	int a[10006];
	FILE *f = fopen("testdata.in", "r");
	fscanf(f, "%d", &t);
	for(int i=0;i<t;i++)
	{
		fscanf(f, "%d %d",&n,&m);
		for(int j=0;j<300;j++)
		{
				a[j]=0;
		}
		for(int j=0;j<n*m;j++)
		{
			fscanf(f, "%d", &a[j]);
		}

		int idx = n*m;
		mergeSort(a,0,idx-1);
//		for(int j=0;j<n*m;j++)
//		{
//			printf("%d ", a[j]);
//		}
//		printf("\n");
		int median;
		if(idx%2==0)
		{
			median= a[idx/2]+a[(idx/2-1)];
//			printf("a[idx/2] = %d || a[idx/2-1]= %d\n", a[idx/2], a[(idx/2-1)]);
			(median%2==0)? median/=2 : median= (median/2) +1;
		}
		else{
			median= a[(idx-1)/2];
//			printf("a[idx-1/2]= %d\n", a[idx-1/2]);
		}
		printf("Case #%d: %d\n", i+1, median);
	}
}
