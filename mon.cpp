#include <iostream>
using namespace std;

int main(){
    int m,n,x,y,a,b;
    int x1=0,x2=0,x1i,x2i,y1=0,y2=0,y1i,y2i;
    cin>>m;
    for (int j = 0; j < m; j++)
    {
        int a[n]={0};
        int b[n]={0};
        cin>>x>>y;
        a[0] = x;
        x2=x;
        b[0] = y;
        y2=y;
        for (int i = 1; i < n; i++)
        {
            cin>>x>>y;
            a[i] = x;
            b[i] = y;
            if(x>x1){
                x1 = x;
                x1i = i;
            }
            if(x<x2){
                x2 = x;
                x2i = i;
            }
            if(y>y1){
                y1 = y;
                y1i = i;
            }
            if(y<y2){
                y2 = y;
                y2i = i;
            }

        }
        
        
    }
    
}