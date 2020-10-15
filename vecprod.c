#include "veclib.h"
//function to element-wise product of 2 vectors
vector vec_c;

float* eleProd(vector vec_a, vector vec_b){
    for(int i=0;i<DIM;i++){
        vec_c[i]=vec_a[i]*vec_b[i];
    }
    return vec_c;
}