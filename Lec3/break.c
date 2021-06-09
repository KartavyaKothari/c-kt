#include<stdio.h>

int main(){
    int i = 0;

    while(i!=10){
        printf("%d Kartavya\n",i+1);
        i = i+1;
        // break;
        if(i==4){
            break;
        }
    }

    for(int i = 0 ; i != 10 ; i = i+1){
        printf("%d Kartavya\n",i+1);
        if(i==5){
            break;
        }
    }


    return 0;
}