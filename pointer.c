#include<stdio.h>

int main(){
    int x=100,y=10;
    int*p=&x;
    int*r=&y;
printf("%p\n",&x);
printf("%p\n",&y);
printf("%d\n",*p+*r);
printf("%d",*p);
    return 0;
}