#include<bits/stdc++.h>
using namespace std;

void helper(string str, string temp, int index, vector<string>& ans){
    if(index==str.length()){
        ans.push_back(temp);
        return;
    }
    helper(str, temp+str[index], index+1, ans);
    helper(str, temp, index+1, ans);
}

vector<string> allPossibilities(string str){
    vector<string> ans;
    helper(str, "", 0, ans);
    return ans;
}

void helper(string str, int n, vector<string>& ans){
    if(n==str.length()){
        ans.push_back(str);
        return;
    }
    helper(str+"0",n,ans);
    helper(str+"1",n,ans);
}
vector<string> allBinaries(int n){
    vector<string> ans;
    helper("", n, ans);
    return ans;
}

int main(){
    string str = "abc";
    vector<string> v = allPossibilities(str);
    for(string x : v){
        cout<<x<<endl;
    }
    vector<string> v1 = allBinaries(2);
    for(string x : v1){
        cout<<x<<endl;
    }
    return 0;
}