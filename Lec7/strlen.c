#include<stdio.h>
#include<string.h>

int size(char arr[]){
    int i = 0;
    int s = 0;

    while(arr[i]!='\0'){
        i++;
    }

    return i;
}

int main(){
    char arr[] = "Omkar";
    printf("The size of %s is %d\n",arr,strlen(arr));
    printf("The size of %s is %d\n",arr,size(arr));
    return 0;
}