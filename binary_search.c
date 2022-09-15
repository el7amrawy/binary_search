#include <stdio.h>
#include <cs50.h>

int binarySearch(int w);

int main(void){

    int n=get_int("Enter num => ");
    binarySearch(n);

}

int binarySearch(int w){
    int arr[]={20,33,35,60,62,69,70,78,90,91};
    //         0, 1, 2, 3, 4, 5, 6, 7, 8 ,9
    int start=0,end=9;

    while(end>=start){
    // for(int n=0;n<4;n++){
    int med=(start+end)/2;
    // printf("starting===>  start: %i end: %i med: %i\n",start,end,med);
        if( w==arr[med] ){
            printf("%i index's is %i\n", w, med);
            return 0;

        } else if(w>arr[med]){
            start=med+1 ;
            med= (start+end)/2;
        } else if(w<arr[med]){
            end=med-1;
            med= (start+end)/2;
        }

    // printf("ending===>  start: %i end: %i med: %i\n",start,end,med);
    }
    printf("%i is not found\n",w);
    return 1;
}
