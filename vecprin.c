#include "veclib.h"
//function to print vector

void print(float * vec_a){
    for(int i=0;i<DIM;i++){
        printf("%f ",vec_a[i]);
    }
    printf("\n");
}