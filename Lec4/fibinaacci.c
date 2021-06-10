#include<stdio.h>

// 1 1 2 3 5 8 13 21 34

int fibo(int n){
    int a = 1;
    int b = 1;

    if(n == 1 || n == 2){
        return 1;
    }

    int old_b;

    for(int i = 2 ; i < n ; i++){
        old_b = b;
        b = a+b;
        a = old_b;
    }

    return b;
}

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("%dth fibonacci num is %d",n,fibo(n));

    return 0;
}