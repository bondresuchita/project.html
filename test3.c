// Kth Rotation//

#include<stdio.h>
int main()
{
  	int arr[50];
  	int k;
  	int n;
  	printf("enter a number n:");
  	scanf("%d",&n);
  	printf("enter a number k:");
  	scanf("%d",&k);
  	for(int i=0;i<n;i++)
        {
      	 scanf("%d",&arr[i]);
        }  
    		 for(int i=0;i<n;i++)
     		 {
      		 printf("%d",arr[i]);
     		 }
    printf("\n");
    if(k<n)
    {
    		for(int i=k;i<n;i++)
   	 	{
      		printf("%d ",arr[i]);
   	 	}
        	 for(int i=0;i<k;i++)
         	{
         	 printf("%d ",arr[i]);
         	}
    }
    else
    {
    k=k%n;
    		for(int i=k;i<n;i++)
    		{
    	 	 printf("%d ",arr[i]);
    		}
                for(int i=0;i<k;i++)
                {
               printf("%d ",arr[i]);
                }
     }
return 0;
}
