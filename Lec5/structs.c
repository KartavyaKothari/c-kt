#include<stdio.h>

struct IntChar{
    int i;
    char c;
};

// struct Something{
//     int i;
//     char c;
//     struct IntChar ic;
// };

int main(){
    struct IntChar var;
    var.c = 'K';
    var.i = 23;

    printf("%d %c\n\n",var.i,var.c);

    struct IntChar arr[3];

    // arr[0].i = 10;
    // arr[0].c = 'A';

    arr[0] = {65,'A'};
    arr[1] = {66,'B'};
    arr[2] = {67,'C'};


    for(int i = 0 ; i < 3 ; i++)
        printf("%d %c\n",arr[i].i,arr[i].c);

    // for(int i = 0 ; i )

    return 0;
}