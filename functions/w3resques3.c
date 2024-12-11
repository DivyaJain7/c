#include<stdio.h>

void Swap(){
        int a,b,c;
        printf("Input 1st number:");
        scanf("%d",&a);
        printf("Input 2nd number:");
        scanf("%d",&b);
        printf("before swapping: n1= %d, n2= %d\n",a,b);
        c=a;
        a=b;
        b=c;
        printf("after swapping: n1= %d, n2= %d\n",a,b);
}
int main(){
        Swap();
        
        return 0;
}