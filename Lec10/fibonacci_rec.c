#include<stdio.h>

// 1 1 2 3 5 8 13 21 34 55 ...

int fibo(int n){
    if(n == 1 || n == 2)
        return 1;
    return fibo(n-1)+fibo(n-2);
}

int main(){
    // fibo(n) = fibo(n-1)+fibo(n-2)
    // n == 1 => 1 or n == 2 => 1
    int n;
    scanf("%d",&n);
    printf("%d",fibo(n));

    return 0;
}