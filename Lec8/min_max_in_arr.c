#include<stdio.h>

int min(int arr[], int size){
    int m = arr[0];

    for(int i = 0 ; i < size ; i++){
        if(arr[i] < m){
            m = arr[i];
        }
    }

    return m;
}

int max(int arr[], int size){
    int m = arr[0];

    for(int i = 0 ; i < size ; i++){
        if(arr[i] > m){
            m = arr[i];
        }
    }

    return m;
}

int main(){
    int arr[] = {665,44,5678,84,677,433,56,74,2,456,654,56,7};
    // int size = sizeof(arr)/sizeof(int);
    int size = 13;

    printf("%d is the maximum of all elements\n",max(arr,size));
    printf("%d is the minimum of all elements\n",min(arr,size));

    return 0;
}