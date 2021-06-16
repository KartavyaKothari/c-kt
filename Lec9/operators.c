#include<stdio.h>

int main(){
    // unary op
    int a = 10;
    a++;
    printf("%d\n",a);

    // Bitwise op
    a = a>>1;
    printf("%d\n",a);
    
    a = a<<1;
    printf("%d\n",a);

    // Assignment op
    a = a + 1;
    a += 1;

    a = a*10;
    a *= 10;

    a++;
    a = a+1;
    a+=1;


    return 0;
}