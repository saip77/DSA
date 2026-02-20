#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int>v = {1,2,3,4,5,6,7,8,9,10};
    for(int i=0; i< v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int &x:v){
        x=x*2;
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    auto it = find(v.begin(), v.end(), 10);
    if(it != v.end()){
        cout<<"Found"<<endl;
        v.erase(it);
        cout<<"Removed"<<endl;
    }
    for(auto x:v){
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int> v1 = {1,2,3,4,5,6,7,8,9,10};
    reverse(v1.begin(), v1.end());
    for(auto x:v1){
        cout<<x<<" ";
    }
    cout<<endl;
}