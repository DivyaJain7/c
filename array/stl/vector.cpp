#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr;
    arr.push_back(1);
    for(auto &it : arr){
       cout<<it;
    }
    cout<<endl;
    arr.pop_back();
    cout<<"Size: "<<arr.size()<<endl;
    cout<<"Capacity: "<<arr.capacity();
    return 0;
}