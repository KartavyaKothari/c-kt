#include<stdio.h>
#include<string.h>

int main(){
    char fname[50] = "Kartavya ";
    char lname[50] = "Kothari";

    strcat(fname,lname);
    printf("%s",fname);

    return 0;
}