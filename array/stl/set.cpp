#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> arr;
    arr.insert({1,1,2,3});
    cout<<"Size: "<<arr.size()<<endl;
    for(auto &it : arr) {
        cout << it<<" "; // just print the element
    }
    return 0;
}