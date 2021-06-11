#include<stdio.h>

// int a = 4203;
// int dig1 = a%10;

// a=a/10;
// int dig2 = a%10;

// a=a/10;
// int dig3 = a%10;

// a=a/10;
// int dig4 = a%10;

int sum_of_digits(int n){
    int temp = n;
    int sum = 0;

    while(temp>0){
        sum = sum + temp%10;
        temp = temp/10;
    }

    return sum;
}

int main(){
    printf("Enter number: ");
    int n;
    scanf("%d",&n);

    printf("Sum of digits of %d is %d",n,sum_of_digits(n));

    return 0;
}