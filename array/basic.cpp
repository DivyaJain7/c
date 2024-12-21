#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    int length=sizeof(arr)/sizeof(arr[0]);
    int i;
    for(i=0;i<length;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}