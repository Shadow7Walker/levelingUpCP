#include<iostream>
using namespace std;

int main(){
    int m,n,a=0,b=0,c=0,d=0;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        c=0;
        d=0;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin>>a;
            if(a==b){
                continue;
            }
            else if(a>b+1){
                c++;
                c+=d/2;
                if((d)%2==1){
                    c++;
                }
                d=0;
            }else{
                d++;
            }
            b=a;
        }
        c+=d/2;
        if(d%2==1){
            c++;
        }
        cout << c << endl;
    }
    
}