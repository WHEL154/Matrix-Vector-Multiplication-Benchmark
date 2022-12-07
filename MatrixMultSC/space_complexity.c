#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main()
{
    int MS = 500;

    int* x = (int*) malloc(MS * MS * sizeof(int));
    int* y = (int*) malloc(MS * sizeof(int));
    int* z = (int*) malloc(MS * sizeof(int));
    
    initMatRand(x, 0, 15, MS);
    initVecRand(y, 0, 15, MS);

    while(1)
    {
     matVecMult(x, y, z, MS);
    }
   
   return 0;
}