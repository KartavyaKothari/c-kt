#include<stdio.h>

union ID{
    int id;
    int id_arr[3];
};

typedef union ID UID;

// union grades{
//     int marks;
//     char g;
// };

int main(){
    // UID var;
    union ID var;
    var.id_arr[0] = 100;
    var.id_arr[1] = 200;
    var.id_arr[3] = 300;

    var.id = 20;

    printf("%d\n",var.id_arr[0]);

    var.id_arr[0] = 11;

    printf("%d",var.id);

    return 0;
}