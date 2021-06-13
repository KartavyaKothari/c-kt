#include<stdio.h>

int main(){
    int a = 100;
    // int *ptr = &a;
    int *ptr;
    ptr = &a;

    printf("%d\n",a);
    printf("%d\n",*ptr);

    *ptr = 23;

    printf("%d\n",a);

    return 0;
}