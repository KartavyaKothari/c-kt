#include<stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int c = 30;

    int max;

    if(a>b){
        if(a>c){
            max = a;
        }else{
            max = c; 
        }
    }else{
        if(b>c){
            max = b;
        }else{
            max = c; 
        }
    }

    return 0;
}