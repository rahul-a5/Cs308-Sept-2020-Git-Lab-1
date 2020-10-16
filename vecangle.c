#include "veclib.h"
#include "math.h"
//function to return angle between two vectors

float angle(vector vec_a, vector vec_b)
{
    float dot_prod = 0, vec_a_mag, vec_b_mag, res, r_angle;
    float v1 = 0, v2 = 0;
    for (int i = 0; i < DIM; i++)
    {
        v1 += (pow(vec_a[i], 2));
        v2 += (pow(vec_b[i], 2));
        dot_prod += (vec_a[i] * vec_b[i]);
    }
    vec_a_mag = sqrt(v1);
    vec_b_mag = sqrt(v2);
    
    // dot product cos^-1(a . b / |a||b|)
    res = dot_prod / (vec_a_mag * vec_b_mag);
    r_angle = acos(res);
    return r_angle;
}