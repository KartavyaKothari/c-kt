#include<stdio.h>

int main(){
    // int, char, float, double, long, short, long double, long long
    printf("short - %d\n",sizeof(short));
    printf("int - %d\n",sizeof(int));
    printf("long - %d\n",sizeof(long));
    printf("long long - %d\n",sizeof(long long));
    printf("\n");
    printf("char - %d\n",sizeof(char));
    printf("\n");
    printf("float - %d\n",sizeof(float));
    printf("double - %d\n",sizeof(double));
    printf("long double - %d\n",sizeof(long double));

    return 0;
}