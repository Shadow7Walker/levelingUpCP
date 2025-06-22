#include<iostream>
#include<vector>
using namespace std;

void solve(){
    int n,c=0;
    cin>>n;
    static vector<bool> pri;
    pri.resize(n+1,true);
    pri[0]=pri[1]=false;

    for(int i=2;i*i<=n;i++){
        if(pri[i]){
            for(int j=i*i;j<=n;j+=i)
            pri[j]=false;
        }
    }
    for(int i=2;i<=n;i++){
        if(pri[i]){
            c+=n/i;
        }
    }
    cout<<c<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}