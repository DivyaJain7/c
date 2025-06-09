#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size of array:";
    cin>>n;
    int arr[]={};
    int array[]={};
    int intersection[]={};
    int i,j,k=0;
    cout<<"Array 1:"<<endl;
    for(i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Array 2:"<<endl;
    for(i=0;i<n;i++){
        cout<<"Element "<<i+1<<": ";
        cin>>array[i];
    }
    cout<<"Array 1: ";
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Array 2: ";
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(arr[i]==array[j]){
                intersection[k]=arr[i];
            }
            k++;
        }
    }
    cout<<endl;
    cout<<"Intersection: ";
    for(i=0;i<n;i++){
        cout<<intersection[i]<<" ";
    }
return 0;
}