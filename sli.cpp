#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,c;
    long long x,y,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y>>a>>b;
        c=0;
        if(a>x/2)
        a=x-a+1;
        if(b>y/2)
        b=y-b+1;
        if(x!=1&&y!=1){
            if(a*y<b*x){
                x=a;
                c++;
            }else{
                y=b;
                c++;
            }
        }else if(x==1){
            y=b;
            c++;
        }else{
            x=a;
            c++;
        }

        while (x!=1||y!=1)
        {
            if(x>y){
                x=ceil(x/2.0);
                c++;
            }else{
                y=ceil(y/2.0);
                c++;
            }
        }
        cout<<c<<endl;

    }
}