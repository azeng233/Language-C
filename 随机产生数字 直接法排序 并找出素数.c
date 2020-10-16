#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10],i,j,flag,t,k;
	for(j=0;j<10;j++)
	{
	    a[j]=rand()%100+1;
	      printf("a[%d]=%d\t",j,a[j]);
	}
	   printf("\n\n");
	      
	   for(i=0;i<9;i++)
	   { k=i;
	      for(j=i+1;j<10;j++)
	       if(a[k]>a[j])
	        k=j;
	       if(i!=k)
	        {t=a[i];a[i]=a[k];a[k]=t;}
	   }

	    
	    printf("排好序后的数组:");
	     printf("\n\n");
	     
	     
	      for(j=0;j<10;j++)
	      printf("%d\t",a[j]);
	  
	   for(j=0;j<10;j++)
       {
	   	flag=1;
	     for(i=2;i<=a[j]-1&&flag;i++)
	       if(a[j]%i==0)
	   	     flag=0;
	    if(a[j]==1)
	   	     flag=0;
	   printf("\n\n");
	   
	   
	  if(flag)
	   printf("a[%d]=%d是素数!\n",j,a[j]);
	  else
	    printf("a[%d]=%d不是素数!\n",j,a[j]);
	   }
	return 0;
}