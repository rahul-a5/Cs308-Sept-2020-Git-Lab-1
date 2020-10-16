#include "veclib.h"
#include <math.h>

float norm(vector vec_a){
    float ans=0;
    for(int i=0;i<DIM;i++){
        ans+=vec_a[i]*vec_a[i];
    }
    ans=sqrt(ans);
    return ans;   
}