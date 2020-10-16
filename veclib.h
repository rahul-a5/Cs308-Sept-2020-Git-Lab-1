
#ifndef veclib
#define veclib

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define DIM 4
// vector type
typedef float vector[DIM];

// functions
// print vector
void print(float * vec_a);

// vector addition
float* add(vector vec_a, vector vec_b);

// elementwise product
float* eleProd(vector vec_a, vector vec_b);

// difference of two vectors
float* diff(vector vec_a, vector vec_b);

// dot product
float dotprod(vector vec_a, vector vec_b);

//angle between 2 vector
float angle(vector vec_a, vector vec_b);

//norm of 1 vector
float norm(vector vec_a);

#endif