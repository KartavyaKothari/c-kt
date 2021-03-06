#include<stdio.h>

int is_vowel(char c){
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
        return 1;
    }else return 0;
}

int vowel_cnt(char arr[]){
    int i = 0;
    int cnt = 0;

    while(arr[i]!='\0'){
        if(is_vowel(arr[i])){
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