#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a > b;
}

int main(){
    //Vector   
    vector<int> v = {3,1,4,5,2,9};
    sort(v.begin(), v.end());
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }

    //Set
    set<int> s = {1,5,3,4,5,2,6,1,8,7,9};
    for(auto x: s)
        cout<<x<<" ";
    cout<<endl;

    //Map
    map<int, int> m;
    m[2]=10;
    m[5]=20;
    for(auto x: m)
        cout<<x.first<<" "<<x.second<<endl;

    vector<int>v2 = {1,2,3,4,5,6,7,8,9};
    sort(v2.begin(), v2.end(), cmp);
    for(auto it: v2)
        cout<<it<<" ";
    cout<<endl;
    return 0;
}