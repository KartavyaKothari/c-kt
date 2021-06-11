#include<stdio.h>

int main(){
    // int one;
    // int two;
    // int three;
    // int four;
    // int five;

    int marks[50];

    // marks[0] = 10;
    // marks[1] = 20;
    // marks[2] = 30;
    // marks[3] = 40;
    // marks[4] = 50;

    for(int i = 0 ; i < 50 ; i++){
        marks[i] = (i+1)*10;
    }

    for(int i = 0 ; i < 50 ; i++){
        printf("%d ",marks[i]);
        if(i%5 == 4){
            printf("\n");
        }
    }


    return 0;
}