#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int c=0;
        int m,k,t;
        cin>>m>>k;
        k=abs(k);

        for (int i = 1; i < m; i++)
        {
            cin>>t;
            t=abs(t);
            if(t>k){
                c++;
            }
        }
        
        if(m%2==0){
            if(c>=m/2-1)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }else if(m%2!=0){
            if(c>=m/2)
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }
    }
}