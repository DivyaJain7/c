#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Total number of elements:";
    cin>>n;
    int arr[n]={};
    for(int i=0;i<n;i++){
        cout<<"insert number "<<i+1<<": ";
        cin>>arr[i];
    }
//array
    cout<<"Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int MIN=-20000000;
    int i;
        int min=20000000;
        for(i=0;i<n;i++){
            if(min>arr[i]&&arr[i]>MIN){
                min=arr[i];
            }
        }
        MIN=min;
        cout<<"Smallest number: "<<min<<endl;
    return 0;
}