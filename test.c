/* 1 MATRIX */
#include<stdio.h>
int main()
{
	int i,j,r,c;
	int arr[20][20];   
	int brr[60][60];
	scanf("%d %d",&r,&c);   
	for(int i=0; i<r; i++)    
	{
 	     for(int j=0; j<c; j++)   
 	     {
 	      scanf("%d",&arr[i][j]);
  	      brr[i][j]=arr[i][j];
  	     } 
        }
	for(i=0; i<r; i++)
	{
 	     for(j=0; j<c; j++)
 	     {
 	     printf("%d ",arr[i][j]);
 	     }
 	 printf("\n");
	}
	for(i=0; i<r; i++)
	{
  	     for(j=0; j<c; j++)
  	 {
  	     if(arr[i][j]==0)
  	  {
    	      int l=i;
    	     int k=j;
   	     for(int p=0; p<r; p++)
   	     {
    	         for(int a=0; a<c; a++)
    	         {
                if(p==l)
               {
               brr[p][a]=0;
               }
               else if(a==k)
               {
               brr[p][a]=0;
               }
                 }
              }
           }
        }    
     }
	printf("\n");
	for(i=0; i<r; i++)
	{
 	    for(j=0; j<c; j++)
 	    {
  	    printf("%d ",brr[i][j]);
  	    }
  	    printf("\n");
	}
    return 0;
}                                     




	
	
	
	
	
	
	
	
	
	
	
	
