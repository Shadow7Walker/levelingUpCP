#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

signed main(){
    int t;
    string s;
    unordered_map<string,int> mp;
    cin>>t;

    while(t--){
        cin>>s;
        if(mp.find(s)==mp.end()){
            mp[s]++;
            cout<<"OK"<<endl;
        }else{
            cout<<s<<mp[s]<<endl;
        }
    }
}