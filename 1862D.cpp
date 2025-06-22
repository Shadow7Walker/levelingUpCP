#include<iostream>
using namespace std;

void solve(){
    long long n,lt=0,rt,mid,t;
    cin>>mid;
    n=(long long)mid*2;
    rt=n;
    
    while(lt<rt){
        mid=(long long)(lt+rt)/2;
        t=mid*(mid-1);
        if(t==n){
            break;
        }else if(t<n){
            lt=++mid;
        }else{
            rt=mid;
        }
    }
    cout<<mid<<endl;
}

signed main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
