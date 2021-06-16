#include<stdio.h>

int vowel_cnt(char arr[]){
    int i = 0;
    int cnt = 0;

    while(arr[i]!='\0'){
        if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u'){
            cnt++;
        }
        i++;
    }

    return cnt;
}

int main(){
    char arr[100];
    scanf("%s",arr);

    printf("Number of vowels in %s is %d",arr,vowel_cnt(arr));

    return 0;
}