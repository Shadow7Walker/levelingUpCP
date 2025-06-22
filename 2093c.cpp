#include<iostream>
#include<string>
using namespace std;


bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}


int main(){
    int n,a,b,c,k;
    string s="";
    long long sk;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b;
        c=0;
        s="";
        sk=0;
        if(a%10==1){
            k=a;
            while(k!=0){
                if(k%10==1){
                    c++;
                    k/=10;
                }else{
                    c=0;
                    break;
                }
            }
        }


        if(b==1){
            if(isPrime(a))
            cout<<"YES"<<endl;
            else
            cout<<"NO"<<endl;
        }else if((c!=0&&c%2!=0)){
            for(int j=0;j<b;j++)
                s+=to_string(a);
            sk=stoi(s);
            if(isPrime(sk)){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
}