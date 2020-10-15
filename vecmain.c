#include "veclib.h"
#include <stdio.h>



int main() {
	vector vecA, vecB, vecC;

	printf("Please enter first vector\n");
    for(int i=0;i<DIM;i++){
        scanf("%f",&vecA[i]);
    }

    printf("Please enter second vector\n");
    for(int i=0;i<DIM;i++){
        scanf("%f",&vecB[i]);
    }
    float * added_vec;
    added_vec=add(vecA,vecB);
    printf("Resultant vector after addition\n");
    print(added_vec);




    return 0;
} 