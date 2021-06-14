#include<stdio.h>

void print_string(char arr[]){
    int i = 0;
    
    while(arr[i]!='\0'){
        printf("%c",arr[i]);
        i++;
    }

    printf("\n");
}

int main(){
    // char arr[] = {'k','a','r','t','a','v','y','a','\0'};
    char arr[] = "kartavya";
    
    // printf("%s",arr);
    print_string(arr);

    return 0;
}