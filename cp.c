#include <stdio.h>

int main(int argc, char *argv[]){

    // printf(argv[1]);

    FILE* file=fopen(argv[1],"r");
    FILE* out=fopen(argv[2],"a");

    if(file !=NULL){
        char ch;
        while((ch=fgetc(file))!= EOF){
            fputc(ch,out);
        }
    } else{
        printf("file not found\n");
        return 1;
    }
    fclose(file);
    fclose(out);
}   