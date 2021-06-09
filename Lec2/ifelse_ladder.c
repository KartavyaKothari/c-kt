#include<stdio.h>

int main(){
    int marks;

    printf("Enter your marks (0-100): ");
    scanf("%d",&marks);

    // 90 <= marks <= 100 - A
    // 50 <= marks <= 89 - B
    // 40 <= marks <= 49 - C
    // 0 <= marks <= 39 - Fail

    // Write your code here to print what grade I get   

    // if( (marks <= 100) && (marks >= 90) ){
    //     printf("A");
    // }else if( (marks <= 89) && (marks >= 50) ){
    //     printf("B");
    // }else if( (marks <= 49) && (marks >= 40) ){
    //     printf("C");
    // }else{
    //     printf("Fail");
    // }

    if(marks >= 90){
        printf("A");
    }else if(marks >= 50){
        printf("B");
    }else if(marks >= 40){
        printf("C");
    }else{
        printf("Fail");
    }



    return 0;
}