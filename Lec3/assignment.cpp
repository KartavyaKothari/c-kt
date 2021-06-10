// Accept a number from the user (n)
// Output a square with rows = columns = n with each num as n

// n = 2

// 2 2
// 2 2

// n = 3

// 3 3 3
// 3 3 3
// 3 3 3

// n = 1

// 1

// n = 5

// 5 5 5 5 5
// 5 5 5 5 5
// 5 5 5 5 5
// 5 5 5 5 5
// 5 5 5 5 5

#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            printf("%d ",n);
        }
        printf("\n");
    }
}