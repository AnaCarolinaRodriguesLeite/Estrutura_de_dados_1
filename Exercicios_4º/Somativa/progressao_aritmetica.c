#include <stdio.h>
#include <stdlib.h>

int pa;

int pa_recursiva (int *v, int primeiro, int ultimo){
    if(primeiro == 0){
        pa = v[primeiro] + v[ultimo];
    }
    if(primeiro == ultimo - 1){
        if(pa == v[primeiro] + v[ultimo]){
            return 1;       
        }
        else
            return 0;
    }
    else{
        if(pa == v[primeiro] + v[ultimo]){
            return pa_recursiva(v,primeiro+1,ultimo-1);       
        }
        else
            return 0;
    }
}