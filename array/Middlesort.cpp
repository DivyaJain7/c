#include<iostream>
using namespace std;
int main(){
    int i=0,j=0,k=0,l=0,n;
    cout<<"number of elements: ";
    cin>>n;
//Main array:
    int array[n]={};
    for(i=0;i<n;i++){
        cout<<"insert number "<<i+1<<": ";
        cin>>array[i];
    }
//Subarray:
    int subarray[n]={};
    i=0;
    while(i<n){
        subarray[i]=array[i]%100;
        i++;
    }
//Sorting Array with Subarray:
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(subarray[j]>subarray[j+1]){
                k=array[j];
                array[j]=array[j+1];
                array[j+1]=k;
                l=subarray[j];
                subarray[j]=subarray[j+1];
                subarray[j+1]=l;
            }
        }
   
}
//Final output:
    cout<<endl;
    cout<<"Sorted Array: ";
    for(i=0;i<n;i++){
        cout<<array[i]<<" ";
    }
return 0;
}