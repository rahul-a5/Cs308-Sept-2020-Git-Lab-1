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

    float * EleProd_vec;
    EleProd_vec=eleProd(vecA,vecB);
    printf("Resultant vector after element-wise Product\n");
    print(EleProd_vec);

    float * Diff_vec;
    Diff_vec=diff(vecA,vecB);
    printf("Resultant difference Vector:\n"); // vec1 - vec2
    print(Diff_vec);

    return 0;
} 