    #include <stdio.h>
    #include <stdlib.h>
    #include <time.h>
    void Selectsort( int *b,int n)
    {
 	   int i,j,temp,k;
 	   for (i=0;i<n-1;i++)
 	     {   
 	     	k=i;
 	        for(j=i;j<n;j++)
 	           if(b[k]>b[j])  k=j;
 	        temp=b[i];b[i]=b[k];b[k]=temp; 	     
 	     }
    }
    
    
    
     int main()
    {   int i,j,t,a[10];
        srand(time(0));
        for(j=0;j<10;j++)
       {  
   	       a[j]=rand()%100;
   	       printf("%4d",a[j]);
       }
   	       printf("\n");
   	        
   	      Selectsort(a,10);      
   	      for(j=0;j<10;j++)
   	      printf("%4d",a[j]);
   	      return 0;
 }