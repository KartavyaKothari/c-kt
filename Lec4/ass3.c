// Armstrong number

// You have to write a program which tells if a number
// entered by the user is Armstrong or not

// xyz = x^3+y^3+z^3

// 153, 370, 371, 407

// Use a function to check if num is Armstrong or not

#include<stdio.h>

int is_armstrong(int n){
    int temp = n;
    int sum = 0;

    while(temp>0){
        sum = sum + (temp%10)*(temp%10)*(temp%10);
        temp = temp/10;
    }

    if(sum == n){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    printf("Enter number: ");
    int n;
    scanf("%d",&n);

    if(is_armstrong(n)){
        printf("%d is armstrong number\n",n);
    }else{
        printf("%d is not an armstrong number\n",n);
    }

    // true - 1
    // false - 0

    return 0;
}