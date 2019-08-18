#include "header.h"
int openFile(FILE **fpp, char* filePath){
    if((*fpp = fopen(filePath, "r")) == NULL){
        fprintf(stderr,"Can't open file\n");
        return -1;
    }
    return 0;
}