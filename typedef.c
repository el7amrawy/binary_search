#include <stdio.h>

    typedef char* string;
    typedef unsigned char byte;
    typedef struct person{
        string name;
        int age;
        string phone;
    } person_t;
    
int main(){

    person_t jack;
    jack.age=20;
    jack.name="Jack Walker";
    jack.phone="092419940202";

    printf("%s %i %s\n",jack.name,jack.age,jack.phone);
}