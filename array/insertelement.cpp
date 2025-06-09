#include<iostream>
using namespace std;

int main(){
    int arr[5]={1,2,4,5};
    int i;
    for(i=0;i<5;i++){
        if(i>1){
            arr[i]=i+1;
        }
        cout<<arr[i];
    }
    return 0;
}