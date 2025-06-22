#include <iostream>
#include <string>
using namespace std;

int main() {
    int m,n,k,a,b,x,y,h;
    cin >> m;
    string s;
    for(int i=0;i<m;i++) {
        a=0;
        b=0;
        cin >> n >> k;
        cin >> s;
        for(int j=0;j<n;j++){
            if(s[j]=='0')
            a++;
            else if(s[j]=='1')
            b++;
        }
        x=a/2;
        y=b/2;
        h=(n/2)%2;
        if(a%2==0){
            if(k<=(x+y) && k>=abs(x-y) && k%2==h) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }else{
            if(k<=(x+y) && k>=abs(x-y) && k%2!=h) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}