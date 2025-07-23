#include<iostream>
#include<string>
using namespace std;

signed main(){
    int c=0;
    string s1,s2,t;
    cin>>s1>>s2;
    int l1=s1.length();
    int l2=s2.length();
    if(l2<l1){
        swap(s1,s2);
        swap(l1,l2);
    }
    for(int i=1;i<=l2-l1;i++){
        t=s2.substr(i,l1);
        if(t==s1){
            if(l1%i==0 && l2%i==0){
                c++;
            }
        }
    }
    cout<<c<<endl;
}