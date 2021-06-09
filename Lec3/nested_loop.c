#include<stdio.h>

int main(){

    for(int i = 0 ; i < 3 ; i++){
        for(int j = 0; j < 3 ; j++){
            printf("%d %d\n",i,j);
        }
    }

    // 0 0
    // 0 1
    // 0 2
    // 1 0
    // 1 1
    // 1 2
    // 2 0
    // 2 1
    // 2 2

    return 0;
}