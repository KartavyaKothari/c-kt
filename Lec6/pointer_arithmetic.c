#include<stdio.h>

int main(){
    int a = 100;
    int *ptr = &a;

    printf("%d\n",ptr);
    printf("%d\n\n",ptr-2);

    char c = 'A';
    char *ptr_c = &c;

    printf("%d\n",ptr_c);
    printf("%d\n",ptr_c+1);
    printf("%d\n",ptr_c+2);

    return 0;
}

// datatype *ptr
// ptr + n === ptr + n*sizeof(datatype)