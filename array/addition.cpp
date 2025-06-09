#include<iostream>
using namespace std;

int addTwoNumbers(int x,int y){
    return x+y;
}
int main(){
    int x,y;
    cin>>x;
    cin>>y;
   int sum =  addTwoNumbers(x,y);
   cout<<sum;
return 0;
}