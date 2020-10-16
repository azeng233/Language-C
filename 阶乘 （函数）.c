#include <stdio.h>
#include <math.h>
double fact(int n)
{
	int i;
	double jc = 1;
	 for(i = 1;i <= n;i++)
	  jc=jc*i;
	   return jc;
} 
int main()
{
	int i=1;
	double s=0,x;
	  printf("ÇëÊäÈëxµÄÖµ:");
	  scanf("%lf",&x);
	for(i = 1;i <= x;i++)
	  s = s+ fact(i);
	 printf("\n1!+2!+3!+...%.0lf!=%.0lf",x,s);
	    return 0;
}