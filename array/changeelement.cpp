#include<iostream>
using namespace std;

int main(){
    int arr[]={10,20,30,40,50};
    int i;
    for(i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"change in element->";
    cin>>arr[0];
    cout<<"new array-> "<<endl;
    for(i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}