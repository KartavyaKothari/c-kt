#include<stdio.h>
#include<string.h>
// #include<stdlib.h>

// void create_copy(char *name_d, char *name_s){
//     int size = strlen(name_s);
//     char arr[size+1];
//     arr[size] = '\0';

//     for(int i = 0 ; i < size ; i++){
//         arr[i] = name_s[i];
//     }

//     name_d = arr;
// }

int main(){
    char arr[] = "Kartavya";
    char *arr2;

    strcpy(arr2,arr);
    // create_copy(arr2,arr);
    // arr2 = arr;
    arr[0] = 'C';

    printf("%s\n",arr2);
    printf("%s",arr);

    return 0;
}