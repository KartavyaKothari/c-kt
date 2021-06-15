// n = 3
//       *
//      ***
//     *****
//    *******
//     *****
//      ***
//       *
// n = 5

//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
#include<stdio.h>

void repeat(char c, int n){
    for(int i = 0 ; i < n ; i++){
        printf("%c",c);
    }
    // printf("\n");
}

void print_pattern(int n){
    int i;
    int j = n;
    for(i = 1 ; i < 2*n ; i = i+2){
        // printf("%d\n",i);
        // printf("%d",j);
        repeat(' ',j);
        j--;
        repeat('*',i);
        printf("\n");
    }

    // printf("%d\n",i);
    repeat('*',i);
    printf("\n");

    j = 1;
    for(i = 2*n-1 ; i >= 1 ; i = i-2){
        // printf("%d\n",i);
        repeat(' ',j);
        j++;
        repeat('*',i);
        printf("\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    print_pattern(n);
}