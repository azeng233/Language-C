#include <stdio.h>

int main(){
  int i = 0;
  int a[100];
  for(i = 2; i <=100; i ++){
    a[i] = i;
  }
  for (i = 2; i < 10; i ++){
    for(int j = i + 1; j <= 100; j++){
       if(a[j] != 0 && a[i] != 0)
         if(a[j] % a[i] == 0) {
           a[j] = 0;
         }
    }
  }
  for(i = 2; i <=100 ; i++){
    if( a[i] != 0 )
      printf("%d ",a[i]);
  }
}
