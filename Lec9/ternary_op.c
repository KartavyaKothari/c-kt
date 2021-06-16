#include<stdio.h>

int is_adult(int age){
    // if(age >= 18){
    //     return 1;
    // }else return 0;

    return age >= 18 ? 1 : 0;

    // ?:;
}

int main(){
    int age = 19;

    if(is_adult){
        printf("Adult\n");
    }else{
        printf("Not adult\n");
    }

    return 0;
}