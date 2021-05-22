#include <stdio.h>
 
int main()
{
	int m,i, j, k, sum = 0;
  	int jojo[60][60], lili[60][60], multiply[60][60], multiply2[60][60], bibi[60][60];
	int T;
	
	scanf("%d", &T);
	
	for(int a=0;a<T;a++)
	{
 		
	  	scanf("%d", &m);

	  	for (  i = 0 ; i < m ; i++ )
	    	for ( j = 0 ; j < m ; j++ )
	      		scanf("%d", &jojo[i][j]);
	      		
		  
	    for ( i = 0 ; i < m ; i++ )
	     	for ( j = 0 ; j < m ; j++ )
	        	scanf("%d", &lili[i][j]);
	        	
	 	for ( i = 0 ; i < m ; i++ )
	      	for ( j = 0 ; j < m ; j++ )
	        	scanf("%d", &bibi[i][j]);
	        
	 
	    for ( i = 0 ; i < m ; i++ )
	    {
	      	for ( j = 0 ; j< m ; j++ )
	      	{
	        	for ( k = 0 ; k < m ; k++ )
	        	{
	          	sum = sum + lili[i][k]*bibi[k][j];
	        	}
	 
	        	multiply[i][j] = sum;
	        	sum = 0;
	      	}
	    }
	 
	 	
	   	for ( i = 0 ; i < m ; i++ )
	    {
	      	for ( j = 0 ; j < m ; j++ )
	      	{
	        	for ( k = 0 ; k < m ; k++ )
	        	{
	          	sum = sum + multiply[i][k]*jojo[k][j];
	        	}
	 
	        	multiply2[i][j] = sum;
	        	sum = 0;
	      	}
	    }    
		 
	    printf("Case #%d:\n", a+1); 
		   
	   	for ( i = 0 ; i < m ; i++)
	    	{
	      		for ( j = 0 ; j < m ; j++ )
	        	{
					printf("%d", multiply2[i][j]);
					if(j+1!=m) printf(" ");
				}
	      		printf("\n");
	    	}
	}
 
  return 0;
}
