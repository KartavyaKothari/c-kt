#include<stdio.h>

int main(){
    int a = 120;
    int *ptr = &a;
    int **ptr2 = &ptr;

    printf("%d %d",*ptr,**ptr2);
    // *ptr2 == &a;

    return 0;
}