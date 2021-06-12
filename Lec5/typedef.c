#include<stdio.h>

typedef struct DC{
    int i;
    char c;
    double d;
} TRIO;

// typedef struct DC TRIO;
typedef long double BIGDECIMAL;

int main(){
    TRIO var = {12,'Q',3.14};
    BIGDECIMAL d = 3.14;

    return 0;
}