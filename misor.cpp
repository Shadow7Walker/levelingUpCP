#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n,m,k,res=0;
    bool a,b,c,d;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>m;
        vector<int> arr;
        res=0;

        for(int j=0;j<m;j++){
            cin>>k;
            arr.push_back(k);
        }
        sort(arr.begin(),arr.end());
        if((arr.front()+arr.back())%2==0){
            cout<<0<<endl;
        }else{
            if(arr[0]%2==0){
                a=false;
            }else{
                a=true;
            }
            if(arr[m-1]%2==0){
                c=false;
            }else{
                c=true;
            }


            for(int j=1;j<=m/2;j++){
                ++res;
                b=arr[j]%2;
                d=arr[m-1-j]%2;
                if(a^b){
                    cout<<res<<endl;
                    break;
                }
                if(c^d){
                    cout<<res<<endl;
                    break;
                }
            }
        }
    }
}