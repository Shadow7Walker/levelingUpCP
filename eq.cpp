#include<iostream>
using namespace std;

int main(){
    long long n,m,k,c,d,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        c=1;
        x=-1;
        cin>>d;
        for(int j=1;j<m;j++){
            cin>>k;
            if(k==d){
                c++;
            }else{
                if(x>d*(m-c) || x==-1){
                    x=d*(m-c);
                }

                d=k;
                c=1;
            }
        }

        if(x>d*(m-c)){
            x=d*(m-c);
        }

        if(x!=-1)
        cout<<x<<endl;
        else
        cout<<0<<endl;
    }
}