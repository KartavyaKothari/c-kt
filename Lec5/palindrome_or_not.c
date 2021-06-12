#include<stdio.h>

int is_palin(int n){
    int temp = n;
    int rev =  0;

    while(temp>0){
        rev = rev*10;
        rev = rev+temp%10;
        temp = temp/10;
    }

    if(rev == n){
        return 1;
    }else{
        return 0;
    }
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);

    if(is_palin(n)){
        printf("%d is palindrome\n",n);
    }else{
        printf("%d is not palindrome");
    }

    return 0;
}