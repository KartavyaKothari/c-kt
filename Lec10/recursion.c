#include<stdio.h>

void func(int n){
    if(n==1)
        return;

    printf("%d\n",n);
    func(n-1);
    printf("%d\n",n);
}

int main(){
    int n = 3;
    // scanf("%d",&n);
    func(n);

    return 0;
}