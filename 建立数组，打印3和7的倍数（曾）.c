#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{ int a[10],j1=0,j2=0,i,j;
  srand(time(0));
    for(i=0;i<10;i++)
    {
     a[i]=rand()%100+1;
      printf("a[%d]=%d",i,a[i]);
      printf("\n");
    }
    for(i=0;i<10;i++)
   {
      if(a[i]%3==0)
      {
  	     printf("�ܱ������������ǣ�a[%d]=%d ",i,a[i]);
  	       j1++;
      }
   }
         printf("������������%2d��!\n",j1);
     for(i=0;i<10;i++)
    {
       if(a[i]%7==0)
    {
        printf("�ܱ������������ǣ�a[%d]=%d  ",i,a[i]);
           j2++;
    }
  }
        printf("������������%2d��!\n",j2);
         j=j1+j2;
          printf("�ܱ�3����7������������%d����\n",j);
           return 0;
}
  
   
  
  