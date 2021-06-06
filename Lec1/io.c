#include<stdio.h>

int main(){
    int age;
    float pi;

    scanf("%d %f",&age,&pi);

    printf("%d in decimal \n",age);
    printf("%o in octal \n",age);
    printf("%x in hex \n",age);
    printf("%X in Hex \n",age);
    printf("Value of PI is %.3f \n",pi);

    printf("My age is %d and value of PI is %.2f",age,pi);

    return 0;
}