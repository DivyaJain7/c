#include<stdio.h>

void function(){
    float a,b;
    int x;
    printf("first number= ");
    scanf("%f",&a);
    printf("second number= ");
    scanf("%f",&b);
    printf("1 for addition\n2 for subtraction\n3 for multipllication\n4 for division\n5 for remainder\n");
    scanf("%d",&x);
    switch(x){
        case 1:
        printf("sum= %f\n",a+b);
        break;
        case 2:
        printf("sub= %f\n",a-b);
        break;
        case 3:
        printf("product= %f\n",a*b);
        break;
        case 4:
        printf("division= %f\n",a/b);
        break;
        case 5:
        // printf("remainder= %f\n",a%b);
        break;
        default:
        printf("doosra daal\n");
    }
}

int main(){
    function();
    function();
    function();
    function();
    function();
    return 0;
}