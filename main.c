#include "header.h"

int main(int argc, char **argv){

    FILE *fp;

    if(argc < 2){
        fprintf(stderr,"Usage: command <csv file>\n");
        return -1;
    }
    
    openFile(&fp,argv[1]);
    show(fp);
    fclose(fp);

    return 0;
}
