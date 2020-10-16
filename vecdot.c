#include "veclib.h"
//function to get dot product of 2 vectors

float dotprod(vector vec_a, vector vec_b){
    vector vec_dot;
    for(int i = 0; i < DIM; i++)
        vec_dot[i]=vec_a[i]*vec_b[i];

    float dprod = 0;
    for(int i = 0; i < DIM; i++)
	dprod += vec_dot[i];
    return dprod;
}
