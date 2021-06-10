#include<stdio.h>

// return_type function_name(argument_list){
//     c = func_body
//     return c;
// }

int add(int x, int y){
    int c = x+y;
    return c;
}

int sub(int x, int y){
    int c = x-y;
    return c;
}

int mul(int x, int y){
    int c = x*y;
    return c;
}

double div(int x, int y){
    double c = (double)x/y;
    return c;
}

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

    int res;
    scanf("%d",&res);

    int c;

    switch(res){
        case 1:
            c = add(a,b);
            printf("%d",c);
            break;
        case 2:
            c = sub(a,b);
            printf("%d",c);
            break;
        case 3:
            c = mul(a,b);
            printf("%d",c);
            break;
        case 4:
            double d = div(a,b);
            printf("%.2f",d);
    }

    return 0;
}