#include<stdio.h>

void function(){
    int a,b,x;
    printf("first number= ");
    scanf("%d",&a);
    printf("second number= ");
    scanf("%d",&b);
    printf("1 for addition\n2 for subtraction\n3 for multipllication\n4 for division\n5 for remainder\n");
    scanf("%d",&x);
    switch(x){
        case 1:
        printf("sum= %d\n",a+b);
        break;
        case 2:
        printf("sub= %d\n",a-b);
        break;
        case 3:
        printf("product= %d\n",a*b);
        break;
        case 4:
        printf("division= %d\n",a/b);
        break;
        case 5:
        printf("remainder= %d\n",a%b);
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