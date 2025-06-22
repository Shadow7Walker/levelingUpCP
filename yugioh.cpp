#include<iostream>
using namespace std;

int main(){
    int n,m,a,a0,a1,b=-1;
    bool res;
    cin>>n;
    for(int i=0;i<n;i++){
        res=false;
        a0=0;
        a1=0;
        b=-1;
        cin>>m;
        for(int j=0;j<m;j++){
            cin>>a;
            if(a==0&&b==0){
                res=true;
            }

            if(a==0){
                ++a0;
            }else{
                ++a1;
            }
            b=a;
        }
        if(a0==0&&a1!=0){
            res=true;
        }
        if(a1==0&&a0!=0){
            res=true;
        }


        if(res){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}