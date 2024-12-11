#include<stdio.h>

void total(){
    int x;
    printf("Input any number for square:");
    scanf("%d",&x);
    printf("The square of %d is:%d",x,x*x);
}
int  main(){
    
    total();

    return 0;
}