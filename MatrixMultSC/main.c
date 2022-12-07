#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main()
{
    int MatSize = 3;

    int* x = (int*) malloc(MatSize * MatSize * sizeof(int));
    int* y = (int*) malloc(MatSize * sizeof(int));
    int* z = (int*) malloc(MatSize * sizeof(int));
    
    initMatRand(x, 0, 15, MatSize);
    initVecRand(y, 0, 15, MatSize);

    matVecMult(x, y, z, MatSize);

    printf("Matrix = ");
    printMat(x, MatSize);
    printf("Vector =");
    printVec(y, MatSize);
    printf("Matrix Vector = ");
    printVec(z, MatSize);

    free(x);
    free(y);
    free(z);

    return 0;
}
