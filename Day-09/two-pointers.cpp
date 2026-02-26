#include <bits/stdc++.h>
using namespace std;

//Implementing Converging Pointers
// What are converging pointers? Pointers start at opposite ends and move toward each other.
bool findTarget(int n){
    vector<int> v = {1,2,3,4,5,6,7,8,9,10};
    int i=0;
    int j = v.size()-1;
    while(i<j){
        if(v[i] + v[j] == n){
            return true;
        }
        else if(v[i] + v[j] < n){
            i++;
        }
        else{
            j--;
        }
    }
    return false;

}

//Implementing Parallel Pointers
// What are parallel pointers? Pointers start at the same end and move in same direction.

vector<int> moveZeroes(vector<int> v){
    int left=0;
    for(int right=0; right<v.size(); right++){
        if(v[right])
        {
            int temp = v[right];
            v[right] = v[left];
            v[left] = temp;
            left++;
        }
    }
    return v;
}

int main(){
    bool target = findTarget(10);
    if(target){
        cout<<"Found"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    cout<<endl;
    vector<int> val = moveZeroes({1,0,2,0,3,0,4,0,5,0});
    for(auto x:val){
        cout<<x<<" ";
    }
    return 0;
}