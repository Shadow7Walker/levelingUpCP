#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    { 
        a+=pow(-1,i+1)*1/i;
    }
    cout<<a;
}
