// Find 2 numbers in given array whose sum is equal to
// the target sum
#include<stdio.h>

void two_sum_sol(int arr[], int size, int target){
    for(int i = 0 ; i < size ; i++){
        for(int j = i+1 ; j < size ; j++){
            if(arr[i]+arr[j] == target){
                printf("%d + %d = %d\n",arr[i],arr[j],target);
                return;
            }
        }
    }

    printf("No possible solution\n");
}

void three_sum_sol(int arr[], int size, int target){
    for(int i = 0 ; i < size ; i++){
        for(int j = i+1 ; j < size ; j++){
            for(int k = j+1 ; j< size ; j++){
                if(arr[i]+arr[j]+arr[k] == target){
                    printf("%d + %d + %d = %d\n",arr[i],arr[j],arr[k],target);
                    return;
                }
            }
        }
    }

    printf("No possible solution\n");
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int target;
    scanf("%d",&target);

    two_sum_sol(arr,15,target);
    three_sum_sol(arr,15,target);
    return 0;
}