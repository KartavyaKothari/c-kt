// https://www.geeksforgeeks.org/operators-c-c/
#include<stdio.h>

int main(){
    int a[] = {10,20};
    int *ptr = a;

    // ++a;
    // a++;

    int b = 10;

    // printf("%d\n",b++);
    // printf("%d",b);

    // printf("%d\n",++b);
    // printf("%d",b);

    printf("%d\n",(*ptr)++);
    printf("%d",*ptr);

    return 0;
}