#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(string r,vector<int> &k,int c=0){
    bool t=true;
    if(r.length()==0){
        k.push_back(c);
        return;
    }

    int l=r.length();
    for(int i=0;i<l;i++){
        if(r[i]=='+'){
            c++;
        }else if(r[i]=='-'){
            c--;
        }else if(r[i]=='?'){
            c++;
            solve(r.substr(i+1),k,c);
            c-=2;
            solve(r.substr(i+1),k,c);
            t=false;
            break;
        }
    }if(t){
        k.push_back(c);
        return;
    }
    return;
}

signed main(){
    vector<int> res;
    int c=0,sum=0;
    double p;
    string s,r;
    cin>>s>>r;
    for(char ch:s){
        if(ch=='+'){
            c++;
        }else if(ch=='-'){
            c--;
        }
    }
    solve(r,res);
    for(int t:res){
        if(t==c){
            sum++;
        }
    }
    p=(double)(sum)/res.size();
    cout<<p<<endl;
}