#include<stdio.h>

int main(){
    int age = -10; 
    // -(2^31)
    printf("Enter your age: ");
    scanf("%d",&age);

    if(age>=18){
        printf("You are an adult!\n");
    }else{
        printf("You are not an adult!\n");
    }

    return 0;
}