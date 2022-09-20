#include <stdio.h>

int main(){
    FILE* text=fopen("t.txt","r");
    if(text != NULL){
        char ch;
        while ((ch=fgetc(text)) != EOF )
        {
            printf("%c",ch);
        }
        fclose(text);
    }
}
