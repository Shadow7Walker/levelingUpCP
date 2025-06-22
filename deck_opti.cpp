#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        int a, b, c;
        cin >> a >> b >> c;  
        if(a>b || b>c){
            cout << "NO" << endl;
            break;
        }
        int s=(a+b+c);
        if(s%3==0 && s/3>=b){
            cout << "YES" << endl;
        }else
            cout << "NO" << endl;

    }
}