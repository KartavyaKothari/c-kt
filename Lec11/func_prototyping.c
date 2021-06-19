#include<stdio.h>

int add(int, int);
int sub(int a, int b);

int main(){
    int a = 21;
    int b = 34;

    printf("Addition of %d and %d is %d",a,b,add(a,b));

    return 0;
}

int add(int a, int b){
    return a+b;
}

int sub(int a, int b){
    return a+b;
}