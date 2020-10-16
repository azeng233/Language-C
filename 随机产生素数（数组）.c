#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[10],i,j,flag;
	for(j=0;j<10;j++)
	   a[j]=rand()%10+1;
	 for(j=0;j<10;j++)
    {
	   	flag=1;
	     for(i=2;i<=a[j]-1&&flag;i++)
	       if(a[j]%i==0)
	   	     flag=0;
	     if(a[j]==1)
	   	     flag=0;
	  if(flag)
	   printf("%d是素数!\n",a[j]);
	  else
	   printf("%d不是素数!\n",a[j]);
	}
	return 0;
}