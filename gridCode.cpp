#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;

        int arr[x*2-1];
        int c=0;

        int k=x*(x*2+1);
        int p=x*x;
        for(int j=0;j<p;j++){
            int y;
            cin>>y;
            if(j<x){
                arr[c++]=y;
                k-=y;
            }
            if(j>x*(x-1)){
                arr[c++]=y;
                k-=y;
            } 
        }

        cout<<k;
        for(int i:arr){
            cout<< " " << i;
        }
        cout<<endl;


    }
}