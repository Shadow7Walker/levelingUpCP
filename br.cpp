#include<iostream>
#include<string>
using namespace std;

int main(){
    int n;
    string s;
    cin>> n;
    for (int i=0;i<n;i++){
        cin>>s;
        int k=0,c=0;
        for(char j:s){
            if(j=='('){
                ++k;
            }else{
                --k;
            }
            if(k==0){
                ++c;
            }
        }
        if(c>1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}