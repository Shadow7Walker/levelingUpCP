#include<iostream>
using namespace std;

int main(){
    int n,m,l,r,h1,h2;
    bool ch;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        int arr[m];
        h1=0;
        h2=0;
        ch=false;
        for(int j=0;j<m;j++){
            cin>>arr[j];
        }
        for(int j=0;j<m;j++){
            cin>>l>>r;
            if(arr[j]!=-1){
                h1+=arr[j];
                h2+=arr[j];
                if(h1>=l&&h1<=r&&h2>=l&&h2<=r)
                    continue;
                else if(h1<l&&h2<=r&&h2>=l){
                    h1=l;
                }else if(h1>=l&&h1<=r&&h2>r){
                    h2=r;
                }else if(h1<l&&h2>r){
                    h1=l;
                    h2=r;
                }else{
                    ch=true;
                    break;
                }
            }else{
                if(h1<l)
                h1++;
                if(h1<l){
                    ch=true;
                    break;
                }
                if(h2>r){
                    ch=true;
                }
            }
            
        }


        if(!ch){
            for(int j=0;j<m;j++){
                cout<<arr[j]<<' ';
            }
            cout<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
}