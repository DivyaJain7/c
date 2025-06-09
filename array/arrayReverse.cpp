#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size of array:";
    cin>>n;
    int arr[n]={};
    int i,j;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Array:";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n/2;i++){
        j=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]=j;
    }
    cout<<endl;
    cout<<"Reversed Array:";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

return 0;
}