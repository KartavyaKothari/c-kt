#include<stdio.h>

int main(){
    int arr1[] = {1,2,3,4,5,6,7,8,9,10};
    int arr2[] = {10,20,30,40,50,60,70,80,90,100};

    // for(int i = 0 ; i < 10 ; i++)
    //     arr2[i] = arr1[i]+arr2[i];

    for(int i = 0 ; i < 10 ; i++){
        printf("%d ",arr1[i]+arr2[i]);
    }

    return 0;
}