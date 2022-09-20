#include <stdio.h>

void swap(int* a,int* b);

int main(){
    int x=5,y=10;
    printf("%i %i\n",x,y);
    swap(&x,&y);
    printf("%i %i\n",x,y);
}

void swap(int* a,int* b){
    // printf("%i %i",a,b);
    int z=*b;
    *b=*a;
    *a=z;
}