#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);

    while(n>0){
        printf("%d",n%2);
        n/=2;
    }

    return 0;
}