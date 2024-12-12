#include<stdio.h>

void toBinary(){
    int x,r;
    scanf("%d",&x);
    while (x>0)
    {
        r=x%2;
        printf("%d",r);
        x=x/2;
    }
    
}

int main(){
    toBinary();

    return 0;
}