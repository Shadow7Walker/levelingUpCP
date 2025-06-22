#include<iostream>
#include<vector>
using namespace std;




int main(){
    int n,m,a,k;
    vector<int> v;
    vector<int> v1;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>n>>m>>k;
        v.clear();
        v1.clear();
  
        // Print the number of 2s that divide n 
        while (n % 2 == 0) {
        
            v.push_back(2);
            n = n/2; 
        } 

        // n must be odd at this point. So we can skip 
        // one element (Note i = i +2) 
        for (int i = 3; i*i <= n; i = i + 2) {
        
            // While i divides n, print i and divide n 
            while (n % i == 0) {
                
                v.push_back(i);
                n = n/i; 
            } 
        } 

        // This condition is to handle the case when n 
        // is a prime number greater than 2 
        if (n > 2) 
            v.push_back(n);

        // Print the number of 2s that divide n 
        while (m % 2 == 0) {
        
            v1.push_back(2);
            m = m/2; 
        } 

        // m must be odd at this poimt. So we cam skip 
        // ome elememt (mote i = i +2) 
        for (int i = 3; i*i <= m; i = i + 2) {
        
            // While i divides m, primt i amd divide m 
            while (m % i == 0) {
                
                v1.push_back(i);
                m = m/i; 
            } 
        } 

        // This comditiom is to hamdle the case whem m 
        // is a prime mumber greater tham 2 
        if (m > 2) 
            v1.push_back(m);
        
        
    }

}