#include<stdio.h>

void display(int arr[3][3]){
    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

void add(int arr1[3][3], int arr2[3][3]){
    int res[3][3];

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            res[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    display(res);
}

void mul(int arr1[3][3], int arr2[3][3]){
    int res[3][3];
    int sum = 1;

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0 ; j < 3 ; j++){
            sum = 0;
            for(int k = 0 ; k < 3 ; k++){
                sum += arr1[i][k]*arr2[k][j];
            }
            res[i][j] = sum;
        }
    }

    display(res);
}

int main(){
    int arr1[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int arr2[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    // display(arr1);
    // display(arr2);
    add(arr1,arr2);

    return 0;
}