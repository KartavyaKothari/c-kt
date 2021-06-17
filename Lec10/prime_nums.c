#include<stdio.h>

int is_prime(int n){
    for(int i = 2 ; i < n/2 ; i++){
        if(n%i == 0){
            return 0;
        }
    }

    return 1;
}

void print_primes(int a, int b){
    for(int i = a ; i <= b ; i++){
        if(is_prime(i)){
            printf("%d ",i);
        }
    }

    printf("\n");
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);

    print_primes(a,b);

    return 0;
}