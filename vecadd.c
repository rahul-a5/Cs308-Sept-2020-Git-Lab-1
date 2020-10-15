#include "veclib.h"
//function to add 2 vector
vector vec_c;

float* add(vector vec_a, vector vec_b){
    for(int i=0;i<DIM;i++){
        vec_c[i]=vec_a[i]+vec_b[i];
    }
    return vec_c;
}