#include<stdio.h>
#include<string.h>

int cmp_strings(char name1[], char name2[]){
    int i = 0;

    while(name1[i] != '\0' || name2[i] != '\0'){
        if(name1[i] == name2[i]){
            i++;
        }else return 1;
    }

    if(name1[i] == '\0' && name2[i] == '\0')
        return 0;
    return 1;
}

int main(){
    char name1[] = "Aditi";
    char name2[] = "Aditi";

    // if(strcmp(name1,name2)==0){
    if(cmp_strings(name1,name2)==0){
        printf("%s and %s are same\n",name1,name2);
    }else{
        printf("%s and %s are differnt\n",name1,name2);
    }

    return 0;
}