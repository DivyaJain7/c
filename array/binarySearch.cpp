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
    cout<<endl;
    int start=0,end=n-1,mid,target,x=0;
    cout<<"element to find:";
    cin>>target;
    while(x!=1){
        mid=(start+end)/2;
        if(arr[mid]==target){
            cout<<"element found at index: "<<mid;
            x=1;
        }
        if(arr[mid]<target){
            start=mid+1;
        }
        if(arr[mid]>target){
            end=mid-1;
        }
        if(start>end){
            cout<<"-1";
            x=1;
        }
    }
return 0;
}