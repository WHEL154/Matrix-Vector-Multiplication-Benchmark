#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "mylib/mylib.h"
FILE *testtime;

int main(void) {
    testtime = fopen("time.dat","w");
    for(int MS = 1000; MS <=5000; MS +=100) {
        int* x = (int*) malloc(MS * MS * sizeof(int));
        int* y = (int*) malloc(MS * sizeof(int));
        int* z = (int*) malloc(MS * sizeof(int));
        
        initMatRand(x, 0, 15, MS);
        initVecRand(y, 0, 15, MS);
        int start = clock();
        matVecMult(x, y, z, MS);
        int end = clock();
        double duration = (double)(end-start)/CLOCKS_PER_SEC;
        fprintf(testtime, "(%d,%f),", MS, duration);
    }

    return 0;
}     