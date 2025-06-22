#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
using namespace std;

void rec(int n,string s,int a,int b, vector<string> &ar1){

    if(a+b==n){
        ar1.push_back(s);
        return;
    }


    if(a<n-2){
        s+='a';
        a++;
        rec(n,s,a,b,ar1);
        s.pop_back();
        a--;
    }
    if(b<2){
        s+='b';
        b++;
        rec(n,s,a,b,ar1);
    }
    // s.pop_back();
    // b--;
}

void solve(){
    int n,k,a=0,b=0;
    vector<string> arr;
    static unordered_map<int,vector<string>> mp;
    cin>>n>>k;
    string s="";
    if(mp.find(n)!=mp.end()){
        cout<<mp[n][k-1]<<endl;
    }else{
        rec(n,s,a,b,arr);
        cout<<arr[k-1]<<endl;
        mp[n]=arr;
    }
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}