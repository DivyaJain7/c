#include<iostream>
using namespace std;
int main(){
    int n,i=0,k=0;
    cout<<"elements in array:";
    cin>>n;
    int arr[n]={};
//insertion of elements in array
    for(i=0;i<n;i++){
        cout<<"insert number "<<i+1<<": ";
        cin>>arr[i];
    }
//array
    cout<<"Unsorted Array: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(i=0;i<n;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                k=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=k;
            }
        }
    }
    cout<<endl;
    cout<<"Sorted Array: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}