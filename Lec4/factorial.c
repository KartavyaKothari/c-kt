#include<stdio.h>

int facto(int n){
    int c = 1;

    for(int i = n ; i > 1 ; i--){
        c = c*i;
    }    

    return c;
}

int main(){ 
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("%d! = %d",n,facto(n));

    return 0;
}