#include"stdio.h"
#include"stdlib.h"
#include"time.h"
int main()
{int a[10],i,s1=0,s2=0,s=0,g=0;
 srand(time(0));
 for(i=0;i<10;i++)
    {a[i]=rand()%100+1;
     printf("a[%d]=%d\t",i,a[i]);
    }
 printf("\n ");
 printf("�ܱ�������������:");
 for(i=0;i<10;i++)
     if(a[i]%3==0)
        {s1=s1+1;printf("%d ",a[i]);}
 printf("����������%d",s1);
 printf("\n�ܱ�������������:");
 for(i=0;i<10;i++)
      if(a[i]%7==0)
        {s2=s2+1;printf("%d ",a[i]);}
 printf("����������%d",s2);
 s=s1+s2;
 printf("\n���ܱ����������ܱ�������������:");
 for(i=0;i<10;i++)
    if(a[i]%7==0&&a[i]%3==0)
        {
         printf("%d ",a[i]);
         g=g+1;
        }
 if(g==0)
   printf("û����������");
 printf("\ng=%d ",g);
 printf("\ns1=%d,s2=%d,s=%d",s1,s2,s);
}