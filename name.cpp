#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    string s;
    for (int i = 0; i < n; i++)
    {
        getline(cin,s);
        cout<<s[0];
        for (size_t i = 0; i < s.length(); i++)
        {
            if(s[i]==' '){
                cout<<s[i+1];
            }
        }
        cout<<endl;
    }
    
}