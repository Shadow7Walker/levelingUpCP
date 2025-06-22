#include<iostream>
#include<string>
using namespace std;

int main(){
    int n,m,a,b,c,d,k;
    string s,ch;

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        a=0;
        b=0;
        c=0;
        d=0;

        cin>>s;
        for(int j=0;j<m;j++){
            ch=s[j];
            k=stoi(ch);
            if(j%2==0){
                if(k==1){
                    a++;
                }
            }else{
                if(k==1){
                    b++;
                }
            }

        }

        cin>>s;
        for(int j=0;j<m;j++){
            ch=s[j];
            k=stoi(ch);
            if(j%2==0){
                if(k==0){
                    c++;
                }
            }else{
                if(k==0){
                    d++;
                }
            }
        }

        if(d>=a&&c>=b){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}