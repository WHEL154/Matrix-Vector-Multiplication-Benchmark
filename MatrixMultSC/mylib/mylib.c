#include <stdio.h>
#include <stdlib.h>

void printMat(int* x, int MS){

    printf("[");
    for(int i=0; i < MS; i++){
        printf("\n");
        for(int j=0; j < MS; j++){
            printf("%d,\t",x[MS*i+j]);
        }
    }
    printf("]\n");

}

void printVec(int* y, int MS){
    printf("[");
    for(int i=0; i<MS; i++){
        printf("\n");
        printf("%d,\t",y[i]);
    }
    printf("]\n");
}

void matVecMult(int* x, int* y, int* z, int MS){

    for(int i=0; i<MS; i++){
        z[i]=0;
        for(int j=0; j<MS; j++){
            z[i] += x[MS*i+j]*y[j];
        }
    }

}

void initMatRand(int* x, int lower, int upper, int MS   ){
    for (int i = 0; i < MS; i++){
        for (int j = 0; j < MS; j++)
        {
            x[i*MS+j] = (rand() % (upper-lower+1)) + lower;
        } 
    }
}

void initVecRand(int* y, int lower, int upper, int MS){
    for (int i = 0; i < MS; i++){
        y[i] = (rand() % (upper-lower+1)) + lower;
    }
}