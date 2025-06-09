#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size of array:";
    cin>>n;
    int arr[n]={};
    int i,j,temp=0,shift=0;
    for(i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Array: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cin>>shift;
    for(i=0;i<shift;i++){
        temp=arr[0];
        for(j=0;j<n;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    cout<<"Shifted Array: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}