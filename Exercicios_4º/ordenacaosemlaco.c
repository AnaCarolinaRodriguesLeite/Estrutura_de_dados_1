#include <stdio.h>
#include <stdlib.h>

int i=0,j=0,min;

void ordena (int *v, int n){
   if(i < n-1){
      if(j == 0){
         min = i;
         j = i+1;
      }
      if (j < n){
            if (v[j] < v[min])  min = j;
            j++;
      }
      else{
         int x = v[i]; 
         v[i] = v[min]; 
         v[min] = x;
         i++;
         j=0;
      }
      return ordena(v,n);
   }
}