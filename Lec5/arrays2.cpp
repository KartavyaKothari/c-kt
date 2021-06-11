#include<stdio.h>

int main(){
    int arr[] = {55,24,77,36,63,47,256,74,35,77,32,68};

    int sum = 0;
    for(int i = 0 ; i < 12 ; i++)
        sum = sum + arr[i];


    printf("Sum of array is %d",sum);

    return 0;
}