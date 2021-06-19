#include<stdio.h>

int main(){
    int arr[] = {1,2,3,4,5};
    // int* arr = {1,2,3,4,5};

    // arr[2] === *(arr+2)
    if(arr+1 == &arr[1]){
        printf("Same");
    }else{
        printf("Not same");
    }

    return 0;
}