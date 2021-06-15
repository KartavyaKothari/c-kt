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

void print_pattern(int n,char c){
    int i;
    int j = n;
    for(i = 1 ; i < 2*n ; i = i+2){
        // printf("%d\n",i);
        // printf("%d",j);
        repeat(' ',j);
        j--;
        repeat(c,i);
        printf("\n");
    }

    // printf("%d\n",i);
    repeat(c,i);
    printf("\n");

    j = 1;
    for(i = 2*n-1 ; i >= 1 ; i = i-2){
        // printf("%d\n",i);
        repeat(' ',j);
        j++;
        repeat(c,i);
        printf("\n");
    }
}

int main(){
    int n;
    char c;
    scanf("%d %c",&n,&c);
    print_pattern(n,c);
}