#include<stdio.h>

int main(){
    int arr[] = {4,3,2,1};
    // int *arr;

    printf("%d\n",*arr);
    printf("%d\n",*(arr+1));

    // arr[i] === *(arr+i)

    return 0;
}