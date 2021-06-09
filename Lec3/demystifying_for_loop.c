#include<stdio.h>

int main(){
    int i = 0;
    for( printf("INIT\n") ; printf("COND\n") ; printf("INCRE\n") ){
        if(i == 3){
            break;
        }
        printf("IN LOOP %d\n",i);
        i = i+1;
    }

    return 0;
}