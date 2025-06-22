#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,m;
    int temp,mx,pos1,pos2;
    long long res,rt,tt;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        int ar1[m];
        int ar2[m];
        for(int j=0;j<m;j++){
            cin>>ar1[j];
        }
        for(int j=0;j<m;j++){
            cin>>ar2[j];
        }
        for(int j=0;j<m;j++){
            mx=0;
            pos1=0;
            pos2=0;
            rt=0;
            tt=0;
            for(int k=0;k<=j;k++){
                temp=ar1[k]+ar2[j-k];
                
                if((ar1[k]>4 && ar2[j-k]>4) || abs(ar1[k]-ar2[j-k])>4){
                    tt=pow(2,ar1[k])+pow(2,ar2[j-k]);
                    rt=max(rt,tt);
                }
                else if(mx<=temp){
                    mx=temp;
                    pos1=j;
                    pos2=k;
                    
                }

            }

            res=pow(2,ar1[pos2])+pow(2,ar2[pos1-pos2]);
            res=max(res,rt);

            res%=998244353;
            cout<< res <<" ";
        }
        cout<<endl;
    }
}