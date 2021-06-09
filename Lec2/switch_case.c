#include<stdio.h>

int main(){
    // Create a calculater with +,-,/,*
    printf("Enter two numbers: ");
    int a,b;
    scanf("%d %d",&a,&b);

    printf("Choose the option\n");
    printf("a. Add\n");
    printf("b. Sub\n");
    printf("c. Mul\n");
    printf("d. Div\n");
    printf("Response: ");

    char res;
    scanf("%c",&res);

    switch(res){
        case 1:
            printf("%d",a+b);
            break;
        case 2:
            printf("%d",a-b);
            break;
        case 3:
            printf("%d",a*b);
            break;
        case 4:
            printf("%.2f",(double)a/b);
    }

    // if(res == 1){
    //     printf("%d",a+b);
    // }else if(res == 2){
    //     printf("%d",a-b);
    // }else if(res == 3){
    //     printf("%d",a*b);
    // }else{
    //     printf("%.2f",(double)a/b); 
    // }

    

    return 0;
}