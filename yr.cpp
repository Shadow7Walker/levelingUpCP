#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {
    int m,n,k,a;
    double sq;
    cin>>m;
    for(int i=0;i<m;i++){
        cin >> n;
        sq = sqrt(n);
        k=floor(sq);
        if(sq==k) {
            a=k/2-1;
            if(a<0)
            a=0;
            cout << a << " " << (k-a) << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}