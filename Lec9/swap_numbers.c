#include<stdio.h>

int main(){
    int a = 10;
    int b = 20;

    printf("%d %d\n",a,b);

    // Swap using extra var
    // int temp = a;
    // a = b;
    // b = temp;

    // Swap using no extra var M1
    // a = a+b;
    // b = a-b;
    // a = a-b;

    // Swap using no extra var M2
    a = a^b;
    b = a^b;
    a = a^b;

    printf("%d %d\n",a,b);

    return 0;
}