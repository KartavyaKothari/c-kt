#include<stdio.h>

typedef struct koala{
    int i;
    char c;
} KOALA;

int main(){
    KOALA k = {12,'F'};
    KOALA *ptr = &k;

    // printf("%d %c",(*ptr).i,(*ptr).c);
    printf("%d %c",ptr->i,ptr->c);

    return 0;
}