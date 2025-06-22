#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;  
        
        while(a!=b){
            a++;
            c--;
        }
        if(a>c){
            cout << "NO" << endl;
            break;
        }
        while(a<c){
            a++;
            b++;
            c-=2;
        }
        if(a==c)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

    }
}