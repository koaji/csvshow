#include "header.h"

void show(FILE *fpp){
    char buf;
    while((buf = fgetc(fpp)) != EOF){
        if(buf == ','){
            printf("\t");   
        }else {
            printf("%c",buf);
        }
    }
}