#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{	int j, a[10];
       srand(time(0));
     for(j = 0; j<10; j++)
	    a[j]=rand()%100+1;	  	 	   	  
	  for(j = 0; j<10; j++)	  
	  	  printf("%4d",a[j]);
}	